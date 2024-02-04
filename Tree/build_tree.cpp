#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        left=right=NULL;
        data=d;
    }
};
void BFS(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
}
Node* buildTree(){
    int t;
    cin>>t;

    if(t==-1)return NULL;
    Node* root = new Node(t);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void printTree(Node* root){
    if(root==NULL)return ;
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}
int main(){
    Node* root = buildTree();
    // printTree(root);
    BFS(root);
}