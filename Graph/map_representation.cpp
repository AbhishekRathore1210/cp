#include<bits/stdc++.h>
using namespace std;
class Graph_map{
    unordered_map<string,list<string>> mp;
    public:
    void addEdge(string u,string v,bool directed = true){
        if(directed)mp[u].push_back(v);
        else{
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto p : mp){
            string node = p.first;
            list<string> nbr = p.second;
            cout<<node<<" : ";
            for(auto nbrs:nbr){
                cout<<nbrs<<" , ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph_map g;
    g.addEdge("Mumbai","Delhi");
    g.addEdge("Delhi","Amritsar",false);
    g.addEdge("Amritsar","Mumbai");
    g.printAdjList();
}
