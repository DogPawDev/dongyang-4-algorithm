/*package whatever //do not write package name here */

import java.io.*;
import java.util.Scanner;
class Main {
	public static void main (String[] args) {

        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        scan.nextLine();
        String plan = scan.nextLine();
        
        
     
        
    	char[] tmp = plan.toCharArray();
    	int x=1;
    	int y=1;
    	int nx=1;
    	int ny=1;
    	int [] dx= {0,0,-1,1};
    	int [] dy= {-1,1,0,0};
    	
    	
    	char[] moveType={'L','R','U','D'};
    	
    	
      
        int [][] map= new int[size][size];
        
     
        
        for(int i=0; i<plan.length(); i++){
	   
	    if(tmp[i] == '\0')
	        break;
	    else if (tmp[i] != ' '){
	        
	            for(int j=0; j<4; j++){
	                if(tmp[i] == moveType[j] ){
	                    nx = x +dx[j];
	                    ny = y +dy[j];
	                }   
	            }
	        
	            if(nx<1|| ny<1|| nx>size || ny > size )
	                continue;
	            x = nx;
	            y = ny;
	        
	        
	        }
	    }


        System.out.printf("%d %d",x,y);


	}
}