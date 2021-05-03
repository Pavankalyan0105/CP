#include <iostream>
#include <string>
using namespace std;
string replaceDigits(string s) 
{
    for(int i=1;i<s.length();i+=2)
    {
        cout<<"-->"<<s[i-1]<<endl;
        s[i] =  char(s[i-1] + (s[i] - 48));
    }
    cout<<s<<endl;
    return s;
}

int main(){
    // cout<<('a'+'b');
    replaceDigits("a1c1e1");
}