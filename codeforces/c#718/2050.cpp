#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;


//Optimal #Uncode CP
void solve1()
{
    ll num;
    int count=0;
    cin>>num;

    if(num%2050 == 0){
        num/=2050;
        while(num)
        {
            count+=(num%10);
            num/=10;
        }
        cout<<count<<endl;
    }
    else{
        cout<<"-1\n";
    }

}



//My solution
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
        solve1();
    }
}