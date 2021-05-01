#include <iostream>
#include <string>
#include <unordered_set>
typedef long long ll;
using namespace std;



int main()

{
    int T;
    cin>>T;

    unordered_set<char> st;
    string given = "EQUINOX";
    for(int i=0;i<given.length();i++){
        st.insert(given[i]);
    }

    for(auto i:st){
        cout<<i<<"  ";
    }

    while(T--){
        ll A , B;
        int n;
        int sart=0 , anu=0;
        string str;
        cin>>n>>A>>B;
        while(n--){
            cin>>str;
            if(st.find(str[0]) != st.end()){
                sart+=A;
            }
            else{
                anu+=B;
            }
        }

        if(anu > sart)       cout<<"ANURADHA";
        else if(anu < sart)  cout<<"SARTHAK";
        else                  cout<<"DRAW";
        cout<<endl;



    }

    
}