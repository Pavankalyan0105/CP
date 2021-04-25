#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cols = n+(n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<cols;j++){
            if(i>0 && i<(n-1))
            {
                if(j==n-i-1 || j == cols-1)
                    cout<<"*";
                else
                    cout<<" ";
            }else{
                    if(j<(n-i-1))
                 cout<<" ";
            else cout<<"*";
            }
            
        }
        cols--;
        cout<<endl;
    }
}
/*
  ***        
 * *
***

*/
