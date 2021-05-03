#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    if(c =='+' || c == '-')
        return true;
    return false;
}

bool isNumber(char c){
    if(c >= '0' && c <= '9')
        return true;
    return false;
}


int eval(int n2, int n1, char c){
    int ans;
    switch(c){
        case '+': ans = n1+n2;
                break;
        case '-': ans = n1-n2;
                break;

        case '*': ans = n1*n2;
                break;

        case '/': ans = n1/n2;
                break;
    }

    return ans;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;

        char prev_op = '_' ;
        char cur_op = '_';

        stack<int> st;
        int n = S.length();
        for(int i=0;i<n;i++){
            int num=0;
            while(i<n && isNumber(S[i])){
                num = num*10 + (S[i] - '0');
                i+=1;
            }
            if(num!=0 ) st.push(num);

            if(i<=n){
                if(prev_op == '_')
                    prev_op = S[i];
                else{
                    int n1 = st.top(); st.pop();
                    int n2 = st.top(); st.pop();
                    st.push(eval(n1 , n2 , prev_op));
                    prev_op = S[i];
                }
            }
        }  
        cout<<endl<<st.top()<<"<--"<<endl;

    }}