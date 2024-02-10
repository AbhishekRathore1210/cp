#include<bits/stdc++.h>
using namespace std;
class Graph{
    int size;
    vector<int> *arr;
public:
    Graph(int n){
        size=n;
        arr = new vector<int>[size];
    }
    void addEdge(int u,int v,bool directed=true){
        if(directed){
            arr[u].push_back(v);
        }
        else{
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
    }
    void printAdjList(){
        for(int i=0;i<size;i++){
            cout<<i<<" : ";
            for(auto x:arr[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cin>>n;
    Graph g(n);
    g.addEdge(0,1,false);
    g.printAdjList();
}