/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class Main {
    
    public static int n,m;
    public static int [][] graph = new int[200][200];
    
    public static int dx[]={-1,1,0,0};
    public static int dy[]={0,0,-1,1};
    
     static class Node{
        final private int x;
        final private int y;
        Node(int x, int y){
            this.x = x;
            this.y = y;
        }
        public int getX() { return x; }
        public int getY(){ return y; }
    } 
  
    
    
    public static int bfs(int x, int y){
       
        
        
       Queue<Node> q = new LinkedList<>();
       q.offer(new Node(x,y));
       
       
       while(!q.isEmpty()){
            Node node = q.poll();
            
            x = node.getX();
            y = node.getY();
            
            for(int i=0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
              
                if(nx<0 || ny<0 || nx>=n || ny>=m)
                    continue;
     
                if(graph[nx][ny]==1){
                    graph[nx][ny] = graph[x][y] + 1;
                    q.add(new Node(nx, ny));
                }
            }
       }
        return graph[n-1][m-1];
    }
    
    private static int dfs(int x, int y){
        Stack<Node> stack = new Stack<Node>();
        
        Node node = new Node(x, y);
        stack.push(node);
        
        
        while (!stack.empty()) {
            node = stack.pop();
            x = node.getX();
            y = node.getY();
            for(int i=0;i<4;i++){
                
                int nx = x + dx[i];
                int ny = y + dy[i];
              
                if(nx<0 || ny<0 || nx>=n || ny>=m )
                    continue;
               
                if (graph[nx][ny]==1 ){
                    graph[nx][ny] = graph[x][y] + 1;
                    stack.push(new Node(nx, ny));
                }
            }
        }
        return graph[n-1][m-1];
    }     
    
    
    
	public static void main (String[] args) {
	    
		Scanner scanner = new Scanner(System.in);
     
        n = scanner.nextInt();
        m = scanner.nextInt();
        scanner.nextLine();
        for(int i=0; i <n; i++){
            String str = scanner.nextLine();
            
            for(int j=0; j<m; j++){
                graph[i][j] = Character.getNumericValue(str.charAt(j));
            }
        }
        
       
        
        scanner.close();
        System.out.println(bfs(0, 0));
        System.out.println(dfs(0, 0));
        
	}
	
	
	
}