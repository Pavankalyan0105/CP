#include <iostream>
using namespace std;
typedef long long ll;
void solve(ll p){
    ll count=0;
    ll n=1;

    while(n<=p){
        if(n%2==0 && p%2==0){
            p/=2;
            n/=2;
        }
        else if(n%2==0)
            count+=1;

        n+=1;
    }

    cout<<count<<endl;
}

int main(){
    int T;
    cin>>T;
    
    while(T--){
        ll p;
        cin>>p;
        solve(p);
    }
}