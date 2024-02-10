#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    char data;
    bool isTerminal;
    unordered_map<char,Node*> childern;
    Node(char d){
        data=d;
        isTerminal=false;
    }
};
class Trie{
    Node* root;
    public:
    Trie(){
        root = new Node(NULL);
    }

void addWord(string s){
        Node* temp = root;
        for(auto word:s){
        if(temp->childern.count(word)==0){
            Node* child = new Node(word);
            temp->childern[word] = child;
            temp = child;
        }
        else{
            temp = temp->childern[word];
        }
        }
        temp->isTerminal = true;
}
bool search(string query){
    Node* temp = root;
    for(char word:query){
        if(temp->childern.count(word)){
            temp=temp->childern[word];
        }
        else{
            return false;
        }
    }
    if(temp->isTerminal){
        return true;
    }
    return false;
}
};
int main(){
Trie t;
string s[] = {"krish","abhishek","yash"};
int n=3;
for(int i=0;i<n;i++){
    t.addWord(s[i]);
}
cout<<t.search("yash");
}