#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin , str);
    
    int i1,i2;
    cin>>i1>>i2;

    if(str[i1]>=65 && str[i1]<=90)
    {
        str[i1] = char(str[i1]+32);
    }
    else if(str[i1]!=' '){
        str[i1] = char(str[i1]-32);
    }

     if(str[i2]>=65 && str[i2]<=90)
    {
        str[i2] = char(str[i2]+32);
    }
    else if(str[i2]!=' '){
        str[i2] = char(str[i2]-32);
    }

    cout<<str;
}