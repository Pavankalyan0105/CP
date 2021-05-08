#include <iostream> 
#define ll long long
using namespace std;

int main(){
	ll n , k;
  	cin>>n>>k;

    for(ll i=0; i<k; i++){
        if(n%200 == 0) n/=200;
        else{
            n = ( ( n*10 + 2 )*100);
        }
    }

    cout<<n;
}