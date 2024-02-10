#include<bits/stdc++.h>
using namespace std;
void subsets(vector<int>& v,vector<int>& ans,int start,int end){
    int n=end-start+1;
    for(int i=0;i<((long)1<<n);i++){
        int val = i;
        int sum=0;
        int j=0;
        while(val&1){
            sum+=v[start+ j];
            j++;
            val>>=1;
        }
        ans.push_back(sum);
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void printVector(vector<int>& v){
    for(int x: v){
        cout<<x<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // printVector(v);
    vector<int> left,right,ans;
    subsets(v,left,0,n/2);
    subsets(v,right,n/2+1,n-1);
    sort(right.begin(),right.end());
    long res=0;
    for(int x:left){
    long ub=upper_bound(right.begin(),right.end(),b-x) - right.begin();
    long lb=lower_bound(right.begin(),right.end(),a-x) - right.begin();
    res = res+ (ub-lb);
    }
    cout<<res<<endl;
    return 0;
}