#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string is2Power(int n){
   int i=1;
   while( pow(2 ,i) < n){
       i+=1;
   }
   

    if(pow(2,i) == n) return "YES";
    
    return "NO";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<is2Power(n)<<endl;
    }
}