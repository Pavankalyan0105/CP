#include <iostream>
#include <vector>
using namespace std;

void printMatrix(int n){
    vector< vector<int> > v( n  , vector<int>(n , 0));

    //borders
    int left = -1 , right = n, bottom = n , top = 0;
    int i=0,j=0 , count=0;

    while(top <= int(n/2))
    {
        while(j < right){
            v[i][j] = ++count;
            j++;
        }
        j--;
        i++;
        right--;

        while(i < bottom){
            v[i][j] = ++count;
            i++;
        }
        i--;
        j--;
        bottom--;

        while(j > left){
            v[i][j] = ++count;
            j--;
        }
        j++;
        i--;
        left++;

        while(i > top){
            v[i][j] = ++count;
            i--;
        }
        i++;
        j++;
        top++;
    } 


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        printMatrix(n);
    }
}

//   ***        
//  * *
// ***
