#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void dfs(unordered_map<int,vector<int>>& adj, vector<bool>& visited, int node){
    visited[node] = true;
    for(int neighbor: adj[node]){
        if(!visited[neighbor]){
            dfs(adj, visited, neighbor);
        }
    }
}


int main(){
    int n;
    cin>>n;

    vector<vector<int>> graph;
    for(int i = 0; i<n; i++){
        vector<int> temp(2);
        cin>>temp[0]>>temp[1];
        graph.push_back(temp);
    }

    unordered_map<int,vector<int>> adj;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(graph[i][0] == graph[j][0] || graph[i][1] == graph[j][1]){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<bool> visited(n, false);
    int components = 0;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            dfs(adj, visited, i);
            components++;
        }
    }
    cout<<components-1<<endl;
}