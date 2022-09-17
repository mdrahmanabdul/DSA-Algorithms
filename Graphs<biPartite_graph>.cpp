/*
Bipartite Graph
*/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> adj;
vector<int> col;
vector<bool> vis;
bool bipart;
void color(int u,int currentColor){
    if(col[u]!=-1 && col[u]!=currentColor){
        bipart = false;
    }
    col[u]=currentColor;
    if(vis[u]){
        return;
    }
    vis[u] = true;
    for(auto i : adj[u]){
        color(i,currentColor xor 1);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    adj = vector<vector<int>>(n);
    col = vector<int>(n-1);
    vis = vector<bool>(n,false);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
        color(i,0);           
        }
 
    }
    if(bipart){
        cout<<"Graph is bipart"<<endl;
    }else{
        cout<<"Graph is not bipart"<<endl;
    }
    
}
