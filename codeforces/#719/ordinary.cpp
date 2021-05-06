#include <bits/stdc++.h>
using namespace std; 


int solve(int n){
    vector<int> v(10 , 0);

    int count=0;

    while(1)
    {
        // 0 11 22 33 44 55 66 77 88 99
        // 0  1  2  3  4 5  6  7  8  9

            for(int i=1;i<10;i++){ 

                v[i] = (v[i]*10) + i;
                
                if(v[i] > n) 
                    return count;

                count++;
            }
    }
    return 0;
}

int main(){
    int T;
    cin>>T;
    while(T--){

        int n;
        cin>>n;

        int count = solve(n);
            
        cout<<count<<endl;

    }

   
}