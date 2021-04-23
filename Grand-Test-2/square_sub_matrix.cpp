#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b, int c)
{
    if(a>b && a>c)  return a;
    else if(b>c)    return b;
    return c;
}

void solve()
{
    int r ,c , num ,max=-1;
    cin>>r>>c;
    vector<vector<int>> mat(r+1 , vector<int>(c+1 , 0));

    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
            cin>>num;
            mat[i][j] = num;
        }

    vector<vector<int>> res = mat;

    
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
            if(mat[i][j] == 1)
            {
                res[i][j] = min(res[i-1][j-1] , res[i-1][j] , res[i][j-1]);

            }
            else{
                res[i][j] = 0;
            }
            if(res[i][j] > max)
                max = mat[i][j];
        }

    cout<<max*max<<endl;

}

int main()
{
    cout<<char('a'+(1));
}
