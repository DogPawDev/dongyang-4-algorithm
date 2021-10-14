import java.util.*;
public class Main {

public static boolean[] visited_DFS = new boolean[9];
public static boolean[] visited_BFS = new boolean[9];

static int[][] graph = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};


    // DFS
    public static void dfs(int x) {
        
        visited_DFS[x] = true;
        System.out.print(x + " ");
       
        for (int node : graph[x]) {
            if (!visited_DFS[node]) {
                dfs(node);
            }
        }
    }
    
    
    // BFS
    public static void bfs(int start) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(start);
     
        visited_BFS[start] = true;
    
        while(!q.isEmpty()) {
        
            int x = q.poll();
            System.out.print(x + " ");
           
            for(int node : graph[x]) {
                if(!visited_BFS[node]) {
                    q.offer(node);
                    visited_BFS[node] = true;
                }
            }
         }
    }
    
    
    public static void main(String[] args) {
        
        System.out.print("DFS : ");
        dfs(1);
        System.out.println();
        System.out.print("BFS : ");
        bfs(1);
    }
}