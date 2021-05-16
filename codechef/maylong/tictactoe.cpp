#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> board(3, vector<char>(3, '_'));
int equalCount;


bool isFilled(){
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='_')
                return false;
        }
    }

    return true;
}

int isEqual(vector<char> &v){
    if(v[0] == '_' || v[1]=='_' || v[2]=='_') return 0;

    if(v[0] == v[1] && v[1] == v[2]) return 1;

    return 0;


}

bool isOWon(vector<char> &v){
    if(v[0] == 'O' && v[1]=='O' && v[2]=='O') return true;
    return false;
}

bool isXWon(vector<char> &v){
    if(v[0] == 'X' && v[1]=='X' && v[2]=='X') return true;
    return false;
}



int is1or2(){
    int topRow = 0;
    int botRow =  0;
    int leftCol = 0;
    int  rightCol = 0;
    int leftdiag = 0;
    int rightdiag=0;
    int possibles = 0;
    int xCount=0 , oCount=0;
    equalCount = 0;
    int digEqual = 0;
    int midRow = 0;
    int midCol = 0;
    int equalRows=0;
    int equalCols = 0;
    int xWon =0 ,Owon = 0;
    vector<char> v(3 , '0');


      for(int i=0;i<3;i++) 
        for(int j=0;j<3;j++) 
            {
                if(board[i][j] == 'O') oCount++;
                if(board[i][j] == 'X') xCount++;
            }

    //checking rows
    int j;
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            v[j] = board[i][j];
        }
        if(i == 0) topRow+=isEqual(v);
        if(i == 1) midRow+=isEqual(v);
        if(i == 2) botRow+=isEqual(v);
        equalCount+=isEqual(v);

        if(isEqual(v)){
        equalRows+=1;

            if(v[0] == 'O') Owon+=1;
            else xWon+=1;
        }
    }

    //checking cols
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            v[j] = board[j][i];
        }
       if(i == 0) leftCol+=isEqual(v);
        if(i == 1) midCol+=isEqual(v);
        if(i == 2) rightCol+=isEqual(v);
        equalCount+=isEqual(v);
        if(isEqual(v)){
            if(v[0] == 'O') Owon+=1;
            else xWon+=1;
        equalCols+=1;

        }

    }

    //diagonals
    for(int i=0;i<3;i++)
        v[i] = board[i][i];

    leftdiag+=isEqual(v);
    equalCount+=isEqual(v);
    digEqual+=isEqual(v);

    if(isEqual(v)){
            if(v[0] == 'O') Owon+=1;
            else xWon+=1;

    }

    
    v[0] = board[0][2];
    v[1] = board[1][1];
    v[2] = board[2][0];

    rightdiag+=isEqual(v);
    equalCount+=isEqual(v);
    digEqual+=isEqual(v);


    if(isEqual(v)){
            if(v[0] == 'O') Owon+=1;
            else xWon+=1;
        }
// //----------------------------------------------------------------

    // cout<<"Xs --> "<<xCount<<endl;
    // cout<<"Os --> "<<oCount<<endl;
    // cout<<"equalCount -->"<<equalCount<<endl;
// //----------------------------------------------------------------


    if(Owon>0 && xCount == oCount && equalCount==1){
        return 1;
    }

    if(equalRows>1) return 3;
    if(equalCols>1 ) return 3;

    if(equalRows == 1 && equalCols == 1) return 1;

    if(leftdiag==1 && equalCount==2) return 1;
    if(rightdiag==1 && equalCount==2) return 1;

    if(equalCount == 2 && leftdiag+rightdiag == 2) return 1;


    if(Owon == 1 && xCount>oCount && equalCount==1) return 3;
    if(xCount == oCount && equalCount==1) return 3;




    // cout<<"------------\n";
    // if(leftdiag+midCol == 2) return 1;
    // if(rightdiag+midCol == 2) return 1;

    // if(leftdiag+midRow == 2) return 1;
    // if(rightdiag+midRow == 2) return 1;


    // if(topRow+leftCol == 2) return 1;
    // if(topRow+rightCol == 2) return 1;
    // if(botRow+rightCol == 2) return 1;
    // if(botRow+leftCol == 2) return 1;

    // // if(midRow+midCol == 2) return 1;

    // if(digEqual==2 && isFilled()) return 1;


    // if(xCount==4 && rightCol && board[2][2]=='O') return 3;

    
    // if(xCount==4 && leftCol && board[0][0]=='O') return 3;

    
    // if(xCount==4 && topRow && board[0][0]=='O') return 3;

    
    // if(xCount==4 && botRow && board[2][2]=='O') return 3;

    // if(leftdiag && topRow) return 1;
    // if(leftdiag && botRow) return 1;
    // if(leftdiag && leftCol) return 1;
    // if(leftdiag && rightCol) return 1;


    // if(rightdiag && leftCol) return 1;
    // if(rightdiag && rightCol) return 1;
    // if(rightdiag && topRow) return 1;
    // if(rightdiag && botRow) return 1;





    //we have xcount , oCount
    // equal count , isFilled

    if(equalCount>1) return 3;


    if(isFilled()) return 1;

        // //wins
        // if(equalCount == 1) return 1;
        
        // //draws
        // if(equalCount == 0 && (xCount+oCount == 9)) return 1;
       
    if(equalCount == 1) return 1;

    return 2; 
    
}


void solve()
{
    int xCount = 0;
    int oCount = 0;
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) 
    {
        cin>>board[i][j];

        if(board[i][j] == 'O') oCount++;
        if(board[i][j] == 'X') xCount++;
    }
    

    if( xCount>= oCount && (xCount-oCount)<=1 )
    {
         if(is1or2() == 1) cout<<"1\n";
    
        else if(is1or2() == 2) cout<<"2\n";

        else cout<<"3\n";
    
    }

    else cout<<"3\n";

    
}


int main() {
	// your code goes here
    long long T;
    cin>>T;
    while(T--){
        solve();
    }
	
	
	
	return 0;
}
