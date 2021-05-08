#include <bits/stdc++.h>
#define ll long long 
using namespace std;

bool comp(vector<int> &a,  vector<int> &b){
    int s1 = a[0]+a[1]+a[2];
    int s2 = b[0]+b[1]+b[2];

    if(s1 > s2) return b < a;
    else if(s1 < s2) return b > a;

    if(a[0] == b[0]) {
        if(a[1] > b[1]) return b < a;
        else  return b > a;
    }

    if(a[1] == b[1]) {
        if(a[2] > b[2]) return b < a;
        else  return b > a;
    }

    return a>b;
}


int main(){
	ll n , k;
    cin>>n>>k;
    int count=0;

    set<vector<int>> st;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                    vector<int> v{i,j,k};
                    st.insert(v);

                } 
            }
        }
    
    set<vector<int> , decltype(comp)*> st2(comp) = st ;
}