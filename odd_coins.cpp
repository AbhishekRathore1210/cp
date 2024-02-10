#include<bits/stdc++.h>
using namespace std;
int findminCoins(int a,vector<int>& v,vector<int>& dp){
    if(a==0)return 0;
    int ans=INT_MAX;
    if(dp[a]!=-1)return dp[a];
    for(int coin:v){
        if((a-coin) >=0){
            int subProb = findminCoins(a-coin,v,dp);
            ans=min(ans,subProb+1);
        }
    }
    return dp[a]=ans;
}
int main(){
    int amount=18;
    vector<int> v = {1,7,10};
    vector<int>dp(amount+1,-1);
    dp[0]=0;
    cout<<findminCoins(amount,v,dp);
}