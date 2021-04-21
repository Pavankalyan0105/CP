#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


string getBinary(int num)
{

    if(num==0) return "0";
    int r;
    string res;

    while(num!=0)
    {
        r = num%2;
        res+=to_string(r);
        num/=2;
    }
    reverse(res.begin(), res.end());
    return res;
}


bool isSubsequence(string str , string bin)
{
    int i=0,j=0;

    int n1 = str.length();
    int n2 = bin.length();

    while(i<n1 && j<n2)
    {
        if(str[i] == bin[j]){
            j+=1;
        }
        i+=1;
    }

    if(j==n2)   return true;
    return false;
}




// bool isSubsequence(string str , string bin)
// {
//     // if(str.find('0') > str.length()) return false;
//     // if(str.find('1') > str.length()) return false;



//     int n1 = str.length();
//     int n2 = bin.length();

//     int dp[n1+1][n2+1] = {};

//      for(int i=0;i<=n1;i++)
//             for(int j=0;j<=n2;j++)
//                 dp[i][j] = 0;



//     for(int i=1;i<=n1;i++)
//     {
//          for(int j=1;j<=n2;j++)
//         {
//             if(str[i-1] == bin[j-1])    dp[i][j] = 1+dp[i-1][j-1];
//             else                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);

//         }
//     }
//     // for(int i=0;i<=n1;i++)
//     //     {
//     //         for(int j=0;j<=n2;j++)
//     //         cout<<dp[i][j]<<"  ";
//     //         cout<<endl;
//     //     }
//     // cout<<"dp "<<dp[n1][n2]<<endl;
//     if(dp[n1][n2] == n2)   return true;

//     return false;
// }

void solve()
{
    string str;
    cin>>str;

    int i=0;

    // if(str.find('0') > str.length()) 
    // {
    //     cout<<"0"<<endl;
    //     return ;
    // }
    // if(str.find('1') > str.length()) 
    // {
    //     cout<<"1"<<endl;
    //     return;
    // }
    while(1)
    {
        string bin = getBinary(i);
        // cout<<"for i == "<<i<<endl;

        if(!isSubsequence(str , bin))
        {
            cout<<bin<<endl;
            break;
        }

        i++;
    }
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
