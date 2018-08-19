#include <iostream>
using namespace std;

int rev(int n) {
    int c=0;
    while(n!=0) {
        c= c*10+ n%10;
        n/=10;
              }
              
              return c;
     
}
 
int main() {
	//cout<<"GfG!";
	int t,a,b;
	cin>>t;
	
  while(t--) {
     /* code */
   
	    cin>>a>>b;
	    
	    a=rev(a);
	    b=rev(b);
	    
	    int ans= a+b;
	    ans= rev(ans);
	    std::cout << ans << std::endl;
	    
	}
	
	return 0;
}