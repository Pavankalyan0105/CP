#include <iostream>
#define mod 1000000007
using namespace std;



// takes power number as input and return ans%mod 
long long power(long long b){
    long long result = 1;
    long long a = 2;
    
    while(b>0){
        if(b%2==1) result = ( (result)%mod * (a)%mod )%mod;
        
        a = ( (a)%mod * (a)%mod )%mod;
        b/=2;
    }
    
    return result;
}

long long go(){
    long long n;
    cin>>n;
    long long ans;
    
    ans = power(n-1);
    
    return ans;
    
}




int main() {
	long long T;
	cin>>T;
	while(T--){
	    cout<<go()<<endl;
	}
	
	return 0;
}
