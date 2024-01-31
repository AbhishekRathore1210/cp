#include<bits/stdc++.h>
using namespace std;
bool isPossible(int row,int col,vector<string> temp,int n){
    int duprow=row;
    int dupcol=col;
    while(row>=0 && col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }
    row=duprow;
    col=dupcol;
    while(col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        col--;
    }
    col=dupcol;
    while(row<n && col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void findAll(vector<vector<string>>& board,vector<string>& temp,int col,int n){
    if(col==n){
        for(string a:temp){
            cout<<a<<" "<<endl;
        }
        cout<<endl;
        // board.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++){
        if(isPossible(row,col,temp,n)){
            temp[row][col]='Q';
            findAll(board,temp,col+1,n);
            temp[row][col]='.';
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<string>> board;
    vector<string> temp(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        temp[i]=s;
    }
    findAll(board,temp,0,n);
    return 0;
}