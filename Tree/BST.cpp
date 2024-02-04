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
Node* insertBST(Node* root , int key){
    // insert in BST


}
Node* createBST(){
    // read input and createBST
    int d;
    cin>>d;
    Node* root = NULL;
    while(d!=-1){
        root = insertBST(root,d);
        cin>>d;
    }
    return root;
    
}
void printTree(Node* root){
    if(root==NULL)return ;

    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}
int main(){
    Node* root = createBST();
    printTree(root);
}