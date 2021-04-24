#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if(num<2) return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

void solve(vector<int> &arr)
{
    if(arr.size() < 2){
        cout<<"0";
        return ;
    }
    int max = 0;
    int min = 10001;

    for(int i=0;i<arr.size();i++){
        if(isPrime(arr[i]))
        {
            if(arr[i]>max) max = arr[i];
            if(arr[i]<min) min = arr[i];

        }
    }
    cout<<max-min;

}


int main()
{
    int N, num;
    cin>>N;

    vector<int> arr;
    for(int i=0;i<N;i++){
        cin>>num;
        arr.push_back(num);
    }

    solve(arr);

}