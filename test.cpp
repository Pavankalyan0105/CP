#include <bits/stdc++.h>
using namespace std;


int main(){     
    int n;
    cin>>n;
    vector<int> arr(n , 0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    map<int,  int> mp;
    stack<int> s;

    for(int i=0; i<n; i++){
        while(!s.empty() && arr[i] > arr[s.top()] ){
            mp[s.top()] = i;
            s.pop();
        }
        if(i<n) s.push(i);
    }
    while(!s.empty()){
        mp[s.top()]--;
        s.pop();
    }


    for(int i=0; i<n; i++){
        if(arr[mp[i]])
            cout<<arr[mp[i]]<<"  ";
        else cout<<-1<<" ";
    }

}