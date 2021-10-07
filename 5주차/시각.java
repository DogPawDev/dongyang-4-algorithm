import java.io.*;
import java.util.Scanner;
class Main {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int cnt = 0;
		
    	for (int i=0; i<= n; i++){
    	    for(int j=0; j<60; j++){
    	        for(int k = 0; k< 60; k++){
    	            if (i % 60 == 3 || j / 10 ==3 || j % 10 == 3 || k /10 ==3 || k % 10==3)
    	                cnt++;
    	        }
    	    }
    	}
		
		System.out.printf("%d",cnt);
	}
}