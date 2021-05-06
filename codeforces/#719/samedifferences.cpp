#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    map<ll , ll> mp;

    ll n;
    cin>>n;

    ll num;
    for(ll i=0;i<n;i++){
        cin>>num;
        mp[num-i]++;
    }

    ll ans =0 ;
    for(auto i:mp){
        ans+=(  ((i.second)*(i.second-1))/2);
    }

    cout<<ans<<endl;
}

int main()
{
    ll T;
    cin>>T;
    while(T--){
        solve();
    }

}