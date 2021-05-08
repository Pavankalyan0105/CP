#include <bits/stdc++.h>
using namespace std; 

int solve(){
    int n;
    cin>>n;

    if(n%2 == 0)    return 0;

    string s;
    while(n!=0){
        s+=(char((n&1)+ 48));
        n>>=1;
    }

    int count=0;
    
    for(int i=(s.length()-1);i>=0;i--){
        count++;
        if(s[i] == '0') return count;   
    }

    return -1;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        cout<<solve()<<endl;
    }
}