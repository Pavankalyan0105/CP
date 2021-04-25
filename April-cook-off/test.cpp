#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{0,2,1,3};
    int ans=v[0];
    for(int i = 0; i < v.size();i++){
        // cout<<(v[i]&v[i]) | v[i]|v[i]<<endl;
        // int a = (v[i]&v[i]);
        // int b = (v[i]&v[i]);
        // cout<<(a|b)<<endl;

        ans = (ans|v[i]);
    }
    cout<<ans<<endl;
    // cout<<(8&8);
}