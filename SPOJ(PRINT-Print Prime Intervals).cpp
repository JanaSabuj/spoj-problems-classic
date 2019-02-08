//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

// For t-testcases,each will give you m and n.print all primes in that range

 #include <bits/stdc++.h>
 //~ #include <inttypes.h>
 using namespace std;
 using ll= long int;
 
 #define MAX 1000007
 
 vector<int> primes;
 
 void sieveofera(){
	 
	 bool sieve[MAX];
	 memset(sieve,true,sizeof(sieve));
	 sieve[1]=false;
	  
	 for(int i=2; i*i<=MAX; i++){
		 
		 if(sieve[i]==true){
			 
				for(int j=i*i; j<=MAX; j+=i){
					
						sieve[j]=false;
											
				}
			 
		 }
		 		 
		}
		
		primes.push_back(2);
		for(int i=3; i<=MAX; i+=2){
			
			if(sieve[i])
				primes.push_back(i);
						
		}
		
	  
	 }
 
 
 void printsieve(ll l,ll r){
	 
		bool isPrime[r-l+1];
		memset(isPrime, true, sizeof(isPrime));
		if(l==1)
			isPrime[0]=false;
		
		for(int i=0; primes[i]*primes[i]<=r; i++){
			
			int curPrime= primes[i];
			ll base= (l/curPrime) * (curPrime);
			if(base<l)
				base+=curPrime;
			
			for(ll j=base; j<= r; j+=curPrime){
				
				isPrime[j-l]=false;
			}
			
			if(base==curPrime)
				isPrime[base-l]=true;
			
		}
		
		 
	 
		for(int i=0; i<=r-l; i++){
			
			if(isPrime[i])
				//~ cout<<i+l<<endl;
				printf("%ld\n",i+l);
			
		}
	 
	 }
 
 
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(NULL);
                  
     
    int t;
    //~ cin>>t;
    scanf("%d",&t);
    
    sieveofera();
    while(t--){
		
		ll m,n;
		//~ cin>>m>>n;
		scanf("%ld %ld",&m,&n);
		
		printsieve(m,n);
		 
		
	}
    return 0;
 }

