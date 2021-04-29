#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int noofdigits(int n){
    int ans =0;
    while(n){
        ans+=1;
        n/=10;
    }
    return ans;
}

void solve(int a , int b, int c){
    int s1 = pow(10 , a-1);
    int s2 = pow(10 , b-1);
    int e1 = pow(10 , a);
    int e2 = pow(10 , b);
    // cout<<s1<<" "<<s2<<endl;
    // cout<<e1<<" "<<e2<<endl;
    // cout<<noofdigits(3);

    int gcd ,n_digits;
    for(int i=s2;i<e2;i++)
        for(int j=s1+1;j<e1;j++){
            gcd = __gcd(i , j);
            n_digits = noofdigits(gcd);
            if(n_digits == c){
                cout<<j<<" "<<i<<endl;
                goto end;
            }
        }
    end:;


}



int main()
{
    int T;
    cin>>T;
    while(T--){
        int a , b ,c;
        cin>>a>>b>>c;
        solve(a, b ,c);
    }
}