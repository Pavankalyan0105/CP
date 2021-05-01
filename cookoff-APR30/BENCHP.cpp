#include <bits/stdc++.h>
using namespace std; 

string solve(){
    int n , w , wr;
    cin>>n>>w>>wr;

    

    map<int  , int> mp;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        mp[num]++;
    }
    if(wr>=w) return "YES";
    w-=wr;

    for(auto i = mp.rbegin();i!=mp.rend();i++){
        while ((i->second)%2 == 0 && w>=0 && i->second >= 2){
            // cout<<i->first<<" -- >"<<i->second<<endl;
            int sub = (i->first)*2;
            w -= sub;
            if(w<=0) return "YES";
        }
    }

    if(w<=0) return "YES";

    return "NO";


}


int main(){
    int T;
    cin>>T;
    while(T--){
        string res = solve();
        cout<<res<<endl;
    }
}