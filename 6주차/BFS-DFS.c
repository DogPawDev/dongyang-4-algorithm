#include <stdio.h>
#include <stdbool.h>

bool visited_DFS[9];
bool visited_BFS[9];

int graph[9][3] ={{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

int queue[9];

int head = 0;
int tail = 0;

int isEmpty(){
    if (head==tail){
        return 1;
    }    
    return 0;
}

void qPush(int data){
    queue[tail]=data;
    tail++;
}

int qPop(){
    int data = queue[head];
    head++;
    return data;
}

int isFull(){
    if(tail+1 ==head){
        return 1;
    }
    return 0;
}



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
    qPush(start);
    visited_BFS[start]= true;
    
    while(!isEmpty()){
        int x = queue[head];
        qPop();
        printf("%d ", x);
        for(int i=0;i<arrMaxCheck(x);i++){
            int node = graph[x][i];
            if(!visited_BFS[node]){
                qPush(node);
                visited_BFS[node]=true;
            }
        }
    }
}





int main() {
	//code
   	dfs(1);
   	printf("\n");
    	bfs(1);
	return 0;
}