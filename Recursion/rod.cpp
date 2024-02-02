#include<bits/stdc++.h>
using namespace std; 
int find(int n,vector<int>& prices){
    if(n<=0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans= max(ans,find(n-i,prices)+prices[i-1]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> prices = {1,5,8,9,10,17,17,20};
    cout<<find(n,prices);
}