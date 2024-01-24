#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,2,4,2,14,2,4,4,2,4,4,1,6};
    int n=14;
    int up_max=-1;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int ans=0;
    int anss=INT_MAX;
    int up_min=-1;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
        mini=min(arr[i],mini);
    }
    for(int i=n;i>=0;i--){
        if(arr[i]==maxi){
            up_max=i;
            if(up_min!=-1){
            ans=abs(up_max-up_min)+1;
            anss=min(ans,anss);
            }
        }
        if(arr[i]==mini){
            up_min=i;
            if(up_max!=-1){
                ans=abs(up_max-up_min)+1;
                anss=min(ans,anss);
            }
        }
    }
    cout<<anss<<endl;
        return 0;
    }