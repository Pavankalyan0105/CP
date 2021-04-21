#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll r , c, k;
    cin>>r>>c>>k;

    long long arr[r+1][c+1] =  {0};

    for(long long i=1;i<=r;i++)
        for(long long j=1;j<=c;j++)
            cin>>arr[i][j];

    long long p[r+1][c+1];
    for(long long i=1;i<=r;i++)
        for(long long j=1;j<=c;j++)
            p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + arr[i][j];

    int count = 0;
    long long n = (r<c)?r:c;
    long long sm=0;

    for(ll i=1;i<=n;i++)
        for(ll x=1;x<=(r-i+1);x++)
            for(ll y=1;y<=(c-i+1);y++)
            {
                sm = p[x+i-1][y+i-1] - p[x+i-1][y-1] - p[x-1][y+i-1] + p[x-1][y-1];
                if((sm/(i*i))>=k)
                    count+=1;
            }

    cout<<count;

}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}
