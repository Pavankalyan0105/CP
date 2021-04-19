#include <iostream>
using namespace std;

void solve(){
    int r , c, k;
    cin>>r>>c>>k;

    long long arr[1000000][1000000] =  {0};

    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin>>arr[i][j];

    long long p[100000][1000000];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + arr[i][j];

    int count = 0;
    int n = (r<c)?r:c;
    int sm=0;

    for(int i=1;i<=n;i++)
        for(int x=1;x<=(r-i+1);x++)
            for(int y=1;y<=(c-i+1);y++)
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
