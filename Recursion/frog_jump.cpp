#include<bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int>& height){
    if(ind==0) return 0;
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height)+ abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height)+ abs(height[ind]-height[ind-2]);
    
    return min(jumpOne, jumpTwo);
}
int main() {

  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<solve(n-1,arr);
}