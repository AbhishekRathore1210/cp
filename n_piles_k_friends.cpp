#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& v){
    for(int x: v){
        cout<<x<<" ";
    }
}
int getMinimum(vector<int>& v,int n,int k){
    int sum1=0;
    int mini=INT_MAX;
    for(int x:v){
        sum1+=x;
        if(x<mini){
            mini=x;
        }
    }
    int start=mini;
    int end=sum1;
    int sum=0;
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2; 
        int count=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum>=mid){
                sum=0;
                count++;
            }
        }
        if(count>=k){
            ans=mid;
            start=mid+1;
        }   
        else{
            end=mid-1;
        }    
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // print(v);
    cout<<getMinimum(v,n,k);
    return 0;
}