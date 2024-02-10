#include<bits/stdc++.h>
using namespace std;
void TOH(char A,char B,char C,int n){
    if(n==0)return ;
    TOH(A,C,B,n-1);
    cout<<A<<"->"<<C<<endl;
    TOH(B,A,C,n-1);
}
int main(){
    int n;
    cin>>n;
    TOH('A','B','C',n);
    return 0;
}