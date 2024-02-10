#include<bits/stdc++.h>
using namespace std;
void print(int tree[],int n){
    for(int i=0;i<(4*n+1);i++){
        cout<<tree[i]<<" ";
    }
    cout<<endl;
}
void BuildTree(int arr[],int tree[],int s,int e,int ind){
    if(s==e){
        tree[ind]=arr[s];
        return;
    }
    int mid=(s+e)/2;
    BuildTree(arr,tree,s,mid,2*ind);
    BuildTree(arr,tree,mid+1,e,2*ind + 1);
    tree[ind] = min(tree[2*ind],tree[2*ind + 1]);
    return;
}
void update(int tree[],int s,int e,int ind,int i,int val){
    if(i<s || i>e)return;
    if(s==e){
        tree[ind]=val;
        return;
    }
    int mid = (s+e)/2;
    update(tree,s,mid,2*ind,i,val);
    update(tree,mid+1,e,2*ind+1,i,val);
    tree[ind] = min(tree[2*ind],tree[2*ind+1]);
    return;
}
int query(int tree[],int s,int e,int ind,int qs,int qe){
    if(e<qs || s>qe){
        return INT_MAX;
    }
    if(s>=qs && s<=qe){
        return tree[ind];
    }
    int mid = (s+e)/2;
    int l = query(tree,s,mid,2*ind,qs,qe);
    int r = query(tree,mid+1,e,2*ind + 1,qs,qe);
    return min(l,r);
}
int main(){
    int n=7;
    int arr[]={3,5,1,6,2,7,4};
    int tree[4*n+1];
    BuildTree(arr,tree,0,n-1,1);
    print(tree,n);
    cout<<endl;
    cout<<query(tree,0,n-1,1,3,6);
    return 0;
}