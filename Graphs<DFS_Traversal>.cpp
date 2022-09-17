/*
        *****************Depth First Search Algorithm*****************
        **Advantages :**
        1-> Requires less memory than BFS
        2-> Can be easily implemented using recursion
        
        ** DisAdvantages : **
        1-> Doesn't necessarily find the shortest path while BFS does.
*/


#include<iostream>
using namespace std;
void print(int **edges,int n,int sv,bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(sv==i){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]==true){
                continue;
            }
            print(edges,n,i,visited);
        }
    }
}
int main()
{
    int n,e;
    cout<<"Enter the number of vertices : "<<endl;
    cin>>n;
    cout<<"Enter the number of edges : "<<endl;
    cin>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
        
    }
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    print(edges,n,0,visited);
    delete[] edges;
    delete[] visited;
    
    
}
