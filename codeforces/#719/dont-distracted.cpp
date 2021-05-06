#include <bits/stdc++.h>
#define vi vector<int> 
#define vvi vector<vector<int> > 


using namespace std;

string solve(string s){
    char prev ;
    char curr ;

    set<char> st;

    for(int i=0;i<s.length();i++){
        curr = s[i];
        if(prev==curr){
            goto ebd;
        }
        else if(st.find(s[i]) != st.end()){
            return "NO";
        }
        else{
            st.insert(s[i]);
        }
        ebd:
        prev = s[i];
    }

    // for(auto i:st) cout<<i<<"  ";

    return "YES";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        cout<<solve(s)<<endl;
    }
}
