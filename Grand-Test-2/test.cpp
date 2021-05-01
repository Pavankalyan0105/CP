#include <iostream>
using namespace std;

// Function that count set bits
int countSetBits(int n)
{

    int count=0;
    while(n)
    {
        count+=(n&1);
        n>>=1;
    }

    return count;
}



int main()
{
    // cout<<countSetBits(5)<<endl;
    // cout<<(5&1)<<endl;
    int res =4>>2;
    cout<<(res);

    // 0
    // 1
    // 10
    // 11
    // 100
    // 101
    // 110
    // 111
    // 1000
    // 
}