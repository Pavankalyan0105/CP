
#include <iostream>
#include <string>
using namespace std;
string giv = "EQUINOX";

bool found(char c){
    for(int i=0;i<giv.length();i++){
        if(giv[i] == c) return true;
    }
    return false;
}

int main(){
        int T;
        cin>>T;
        while(T--){
            int n , A , B;
            int sart=0, anu=0;
            cin>>n>>A>>B;


            string str;
            while(n--){
                cin>>str;
                if(found(str[0]))  sart = sart +(A)%10000007;
                else                anu = anu + (B)%10000007;
            }

            if(sart > anu) cout<<"SARTHAK";
            else if (sart < anu) cout<<"ANURADHA";
            else cout<<"DRAW";
            cout<<endl;
        }
}