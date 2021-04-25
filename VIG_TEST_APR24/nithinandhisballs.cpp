#include <iostream>
#include <vector>
using namespace std;
void solve(int balls , vector<int> &v){
    int ans=0;
    for(int i=0;i<v.size();i++){
        if(balls/v[i]>0){
            ans+=(balls/v[i]);
            balls%=v[i];
        }
    }
    cout<<ans<<endl;
}



int main()
{
    vector<int> v{64 , 32 , 16 ,8,  4 , 2 ,1};

    int T;
    cin>>T;
    while(T--){
        int balls;
        cin>>balls;
        solve(balls , v);
    }
}