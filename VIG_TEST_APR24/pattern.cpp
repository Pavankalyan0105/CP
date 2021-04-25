#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll lim = (n/2);

    if(n%2 == 1) lim+=1;

    for(ll i=0;i<lim;i++)
    {
        for(ll j=0;j<n;j++)
            if( (i==j) || (i+j)==(n-1)) cout<<j+1<<" ";
            else cout<<" ";
            cout<<endl;
        
    }
    return 0;
}