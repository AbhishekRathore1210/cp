#include<bits/stdc++.h>
using namespace std;
int findHeight(vector<int>& v,int m){
    int maxi=INT_MIN;
    for(int x:v){
        maxi=max(maxi,x);
    }
    int s=0;
    int e=maxi;
    int res=0;
    while(s<=e){
        int mid=(s+e)/2;
        int ans=0;
        for(int x:v){
            if(x>mid){
                ans+=(x-mid);
            }
        }
        if(ans < m){
            e=mid-1;
        }
        else if(ans > m){
            s=mid+1;
        }
        else{
            return mid;
        }
    }
    return e;
}
void print(vector<int>& v){
    for(int x:v)cout<<x<<" ";
}
int main(){
    int n;
    int m;
    cin>>n;
    vector<int> v(n,0);
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // print(v);
    cout<<findHeight(v,m);
    return 0;
}