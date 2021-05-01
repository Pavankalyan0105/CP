#include <iostream>
#include <string>
using namespace std;


int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        string str;
        cin>>n>>str;

        int goods=0;
        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                goods+=1;
                if((float(goods)/2) >= 0.5)
                    break;
            }
        }

        if((float(goods)/n)>= 0.5) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}

