#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin  , s);
    // cout<<s;

    unordered_set<char> st;
    for(int i=0;i<s.length();i++){
        if(st.find(s[i]) == st.end() && s[i]!=' '){
            cout<<s[i];
            st.insert(s[i]);
        }

      }
    return 0;

}
