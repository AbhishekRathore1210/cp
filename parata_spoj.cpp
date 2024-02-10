#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& v,int parata,int cook){
    int start=0;
    int mini=INT_MAX;
    for(int x: v){
        mini=min(x,mini);
    }
}
int main(){
    int parata;
    cin>>parata;
    int cook;
    cin>>cook;
    vector<int> v(cook,0);
    for(int i=0;i<cook;i++){
        cin>>v[i];
    }
    find(v,parata,cook);

}