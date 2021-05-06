#include <bits/stdc++.h>
using namespace std; 


void solve(){
    int n;
    cin>>n;

    if(n == 2) {
        cout<<"-1\n";
        return ;
    }

    int count=0;

    for(int i=2; i<=(n*n);i+=2){
            cout<<i<<" ";
            count++;
            if(count%n == 0)
            cout<<endl;
    }
    for(int i=1; i<=(n*n);i+=2){
            cout<<i<<" ";
            count++;
            if(count%n == 0)
            cout<<endl;
    }
}


int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }

   
}