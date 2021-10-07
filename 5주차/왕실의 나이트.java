
import java.io.*;
import java.util.Scanner;
class Main {
	public static void main (String[] args) {
	
		 Scanner scan = new Scanner(System.in);
		int [] dx = {-2, -1, 1, 2, 2, 1, -1, -2};
		int [] dy = {-1, -2, -2, -1, 1, 2, 2, 1};
		
		String input = scan.nextLine();
		char[] tmp = input.toCharArray();
		
		
		int row = tmp[1] - '0';
        int col = tmp[0] - 'a' + 1;
        int result=0;
		
		  for(int i=0; i<8;i++){
        
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];
        
        if (nextRow >= 1 && nextRow <= 8 && nextCol >= 1 && nextCol <= 8)
            result++;

        
        
        }
        System.out.printf("%d",result);
		
	}
}