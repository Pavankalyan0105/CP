#include <iostream>
#include <vector>
using namespace  std;
typedef long long ll;


int max(int a , int b){
  return (a>b)?a:b;
}
void solve()
{
  ll N , r , num;
  cin>>N>>r;

  vector<ll> A;
  vector<ll> B;

  for(int i=0;i<N;i++)
    {
        cin>>num;
        A.push_back(num);
    }
    for(ll i=0;i<N;i++)
    {
          cin>>num;
          B.push_back(num);
    }

    ll T = B[0];
    ll max_t = T;

    for(ll i=1;i<N;i++)
    {
          T -= ((A[i]-A[i-1])*r);
          T = max(T , 0);
          T += B[i];

          max_t = max(T , max_t);
    }

    cout<<max_t<<"\n";


}


int main()
{
  int T;
  cin>>T;
  while(T--){
    solve();
  }
}
