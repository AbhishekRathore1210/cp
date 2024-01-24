#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& start,vector<int>& end,int n){
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back({end[i],start[i]});
    }
    
}
int main(){
    int n=6;
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    findMin(start,end,n);
}