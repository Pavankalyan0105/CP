#include <iostream>
#include <string>
using namespace std;

int solve(int n , string str)
{
    int res = 0;
    
    if(n==0)    return res;
    
    if(n == 1){
        res = (str == "striker")?36:30;
        return res; 
    }
    else{
        res = (str == "striker")?(33+36):(27+36);
        res += (n-2)*33;
    }

    return res;
}


int main()
{
    string str;
    cin>>str;

    int ov;
    cin>>ov;

    cout<<solve(ov , str);

}