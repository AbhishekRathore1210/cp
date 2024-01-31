#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        int i=0;
        int j=k;
            while(i<n && j<n){
            cout<<v[i][j]<<" ";
            i++;
            j++;
        }
        cout<<endl;
    }
}