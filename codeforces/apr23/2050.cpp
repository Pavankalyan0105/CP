#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int solve()
{
    ll num , init;
    int count=0;
    cin>>num;

    while(num>=2050)
    {
        init = 2050;

        while(init <= num)  init*=10;
        init/=10;

        num-=init;
        count+=1;
    }
    if(num==0)  return count;
    return -1;


}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cout<<solve()<<endl;
    }
}