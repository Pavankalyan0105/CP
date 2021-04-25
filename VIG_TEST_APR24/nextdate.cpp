#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> m30{4,6,9,11};
vector<int> m31{1,3,5,7,8,10,12};

bool is30(int m)
{
    if(binary_search(m30.begin() , m30.end() , m)) return true;
    return false;
}

bool is31(int m)
{
    if(binary_search(m31.begin() , m31.end() , m)) return true;
    return false;
}
bool isLeap(int m)
{
    if(m%4!=0)  return false;

    if(m%100 == 0 && m%400!=0)  return false;

    return true;
}

void nextDate(int d , int m , int y)
{
    if(m == 2)
    {
        if( (isLeap(y) && d == 29 ) || (d == 28 && !isLeap(y) ))
        {
            d=1; m+=1;
        }
        else    d+=1;
    }

    else if(is30(m) && d==30)
    {
        d=1;
        m+=1;
    }
    else if(is31(m) && d==31)
    {
        if(m==12){
            y+=1;
            m=1;
            d=1;
        }
        else{
            d=1;
            m+=1;
        }
    }
    else{
        d+=1;
    }

    // cout<<d<<"-"<<m<<"-"<<y;
    printf("%02d-%02d-%04d" , d, m , y);
    
}


int main()
{
    string date;
    cin>>date;

    int day = (date[0]-48)*10+(date[1]-48);
    int month = (date[3]-48)*10+(date[4]-48);
    int year = ((date[6]-48)*1000) + ((date[7]-48)*100) + ((date[8]-48)*10) + (date[9]-48);
    

    nextDate(day , month  , year);



}

