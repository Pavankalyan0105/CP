#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int x , y , xr , yr , D;
        cin>>x>>y>>xr>>yr>>D;

        if((D*xr)<=x && (D*yr)<=y)
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
}