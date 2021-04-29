#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int solve(){
    int n , k , num;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }

    if(k == 1)  return abs(k-v[n-1]);

    // cout<<"Hello";
    int mid , low=0 , high , ans=0;

    mid = (v[0]+v[n-1])/2;
    if(n<=0) mid = v[0];

    

    low = mid - (k/2);
    high = mid+(k/2);

    if(n%2 == 0) low++;

    for(int i=0;i<n;i++){
        if(i<(n/2))
            ans+=(high - v[i]);
        else ans += (v[i] - low);
    }

    return ans;

}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int res = solve();
        cout<<res<<"\n";
    }
}