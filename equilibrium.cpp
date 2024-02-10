#include<iostream>
using namespace std;
int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    int sum=0;
    int sum2=0;
    int n=7;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<7;i++){
        sum2+=arr[i];
        if(sum-sum2 == sum2-arr[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}