#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

char isPass(int X , int Y , string str){
    int n = str.length();
    int nP =0, nF=0;
    int i = 0;
    while(i<n){
        if(str[i] == 'P') nP+=1;
        else if(str[i] == 'F') nF+=1;
        i++;
    }

    // cout<<"For "<<str<<"nF and nP are  "<<nF<<"  "<<nP<<endl;



    if(nF >= X) return '1';
    if(nF >= (X-1) && nP >= Y)  return '1';
    return '0';

}


void solve(){
    int N , M;
    cin>>N>>M;
    
    int X , Y;
    cin>>X>>Y;

    string ans="",str;
    for(int i=0;i<N;i++){
        cin>>str;
        // cout<<str;
        ans+=isPass(X , Y , str);
    }
    cout<<ans<<"\n";



}

int main()
{
    int T;
    cin>>T;
    while(T--)
        solve();
}