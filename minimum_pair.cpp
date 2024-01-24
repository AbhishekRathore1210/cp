#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=11;
    char arr[]={'a','g','s','a','g','d','a','a','e','g','a'};
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='a'){
            count++;
        }
        else if(arr[i]=='g'){
            ans+=count;
        }
    }
    cout<<ans<<endl;
    return 0;
}