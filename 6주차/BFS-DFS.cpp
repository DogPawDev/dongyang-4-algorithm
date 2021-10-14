#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;



bool visited_DFS[9];
bool visited_BFS[9];

int graph[9][3] ={{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

int arrMaxCheck(int x){
    int max=0;
    for(int i=0;i<3;i++){
        if(graph[x][i] != 0)
            max++;
    }
    return max;
}


void dfs(int x){
    visited_DFS[x]=true;
    
    printf("%d ",x);
    
     for(int i=0; i<arrMaxCheck(x);i++){
        int node = graph[x][i];
        if(!visited_DFS[node]){
            dfs(node);
        }
    }
}

void bfs(int start){
    
    queue<int> q;
    q.push(start);
    
    visited_BFS[start] = true;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ",x);
        for(int i=0;i<arrMaxCheck(x);i++){
            int node = graph[x][i];
            if(!visited_BFS[node]){
                q.push(node);
                visited_BFS[node] = true;
            }
        }
    }
}


int main() {
	cout << "DFS : ";
	dfs(1);
	cout << '\n';
	
	cout << "BFS : ";
	bfs(1);
	return 0;
}