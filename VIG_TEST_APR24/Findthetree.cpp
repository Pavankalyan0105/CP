#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int r, c , ele,num;
        string found = "NO";
        cin>>r>>c>>ele;

        for(int i=0;i<(r*c);i++){
            cin>>num;
            if(num == ele) found = "YES";
        }

        cout<<found<<endl;


    }
}