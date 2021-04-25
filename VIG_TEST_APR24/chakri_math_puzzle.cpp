#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;



int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<ll(pow(3*n , 2)+1)<<endl;
    }
}