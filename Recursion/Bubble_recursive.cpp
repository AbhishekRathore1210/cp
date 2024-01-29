#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n,int i){
    if(n==1)return;
    if(i==n-1){
        bubbleSort(arr,n-1,0);
        return;
    }
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n,i+1);
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n,0);
    print(arr,n);
}