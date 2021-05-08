#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	ll n;
  	cin>>n;
    vector<ll> arr(n , 0);
    for(ll i=0; i<n; i++){
        cin >> arr[i] ;
    }

    map<ll,ll> mp;
    ll count=0;
    for(ll i=0; i<n; i++){
        ll x = arr[i]%200;
            
        count+=mp[x];
        mp[x]++;
    }

    cout<<count;
}