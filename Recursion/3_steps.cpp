#include<bits/stdc++.h>
using namespace std; 
void printWays(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]-v[i+1]<<" ";
    }
    cout<<endl;
}
int findWays(int n,vector<int>& v){
    if(n==0){
        v.push_back(0);
        printWays(v);
        v.pop_back();
        return 1;
    }
    if(n<0)return 0;
    v.push_back(n);
    int ans = findWays(n-1,v)+findWays(n-2,v)+findWays(n-3,v);
    v.pop_back();
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    cout<<findWays(n,v);
    return 0;
}