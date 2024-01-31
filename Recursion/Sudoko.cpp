#include<bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,int i,int n){

}
void print(vector<vector<int>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Solve(vector<vector<int>>& board,int row,int col,int n){
    if(row==n){
        print(board);
        return true;
    }
    if(col==n){
       return Solve(board,row+1,0,n);
    }
    if(board[row][col]!=0){
        return Solve(board,row,col+1,n);
    }
    for(int i=1;i<=n;i++){
            if(isSafe(row,col,i,n)){
                board[row][col]=i;
                bool solve =  Solve(board,row,col+1,n);
                if(solve)return true;
                board[row][col]=0;
        }
    }
}
int main(){
    vector<vector<int>> board(9,vector<int>(9,0));
    int n=9;
    Solve(board,0,0,9);
}