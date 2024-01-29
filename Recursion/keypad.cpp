#include<bits/stdc++.h>
using namespace std;
void findAll(string s,vector<string>& keypad,int ind,string ans,vector<string>& output){
    if(ind==s.length()){
        output.push_back(ans);
        return;
    }
    int curr = s[ind]-'0';
    if(curr == 0)return findAll(s,keypad,ind+1,ans,output);
    for(char c:keypad[curr]){
        findAll(s,keypad,ind+1,ans+c,output);
    }
}
void print(vector<string> output){
    for(string a:output){
        cout<<a<<" ";
    }
}
int main(){
    string s;
    cin>>s;
    vector<string> keypad = {" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    int n = 9;
    string ans="";
    vector<string> output;
    findAll(s,keypad,0,ans,output);
    print(output);
}