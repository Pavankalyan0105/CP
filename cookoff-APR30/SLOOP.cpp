#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int minutes , song_time;

        cin>>minutes>>song_time;
        cout<<minutes/song_time<<endl;
    }
}