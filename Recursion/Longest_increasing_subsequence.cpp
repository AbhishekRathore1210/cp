#include<bits/stdc++.h>
using namespace std;
void LIS(int n,vector<int>& arr,vector<int>& dp){
    dp[0]=1;
    for(int i=1;i<n;i++){
        int ans=INT_MIN;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                dp[i]=max(dp[j]+1,dp[i]);          
            }
        }
    }
}
int main(){
   int n=9;
   vector<int> arr = {3,2,4,1,7,8,6,10,9,2};
   vector<int> dp(9,1);
   LIS(n,arr,dp);
   int maxi=INT_MIN;
   for(int i=0;i<9;i++){
    cout<<dp[i]<<" ";
    maxi=max(maxi,dp[i]);
   }
//    cout<<maxi<<endl;
   return 0;
}