#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int X , N , num;
    int prev_num;
    int sum=0;
    int ans = 0;
    cin>>N>>X;
    cin>>prev_num;
    sum = prev_num;
    for(int i=1; i<N;i++){
        cin>>num;
        sum+=num;
        if(prev_num != num) ans+=1;
        prev_num=num;
    }
    if(ans == 0) return "NO";
    if(sum == X) return "NO";
    return "YES";

}

int main(){
    int T;
    cin>>T;
    while(T--){
        cout<<solve()<<endl;
    }
}