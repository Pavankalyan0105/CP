#include <iostream>
#include <map>
#include <vector>
using namespace std;


void test()
{
    vector<vector<int>> v(1000 , vector<int>(1000 , 0));
    for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
               cout<<v[i][j]<<"  ";
            cout<<endl;
        }
}

bool found()
{
    int size , k , num;
    vector<int> arr;
    map<int,int> m;

    cin>>size>>k;

    for(int i=0;i<size;i++)
    {
        cin>>num;
        arr.push_back(num);
    }

    for(int i=0;i<size;i++)
    {
        if(m[arr[i]]>0)
            return true;
        m[arr[i]]+=1;
    }

    return false;



}



int main()
{
    // if(found()) cout<<"YES";
    // else       cout<<"NO";
    test();
}