#include <bits/stdc++.h>
using namespace std;



void solve()
{
   int n , x , sum=0;
   cin>>n>>x;
  
   vector<int> v(n , 0);
   for(int i=0; i<n; i++)
   {
       cin>>v[i];
       sum+=v[i];
   }
    if(sum == x)  {
        cout<<"NO"<<endl; 
        return ;
    }

    sum=0;
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++){
        sum+=v[i];
        if(sum == x) swap(v[i], v[i+1]);
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}