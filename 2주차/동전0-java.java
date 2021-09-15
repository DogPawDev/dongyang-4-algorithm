/*package whatever //do not write package name here */

import java.io.*;
import java.util.Scanner;
class Main {
	public static void main (String[] args) {
	    Scanner scan = new Scanner(System.in);
	    
	    int[] nType;
	    
	    int nMax=0;
	    int cnt=0;
	    int k=0;
	    
	    nMax = scan.nextInt();
	    
	    k = scan.nextInt();
	    nType = new int[nMax];
	    
	    for(int i=0; i<nMax;i++){
	        nType[i] = scan.nextInt();
	    }
	    
	    for(int i=nMax-1; i>=0;i--){
	        if(nType[i]!=0){
	            cnt = cnt + k / nType[i];
	            k = k % nType[i];
	        }else{
	            continue;
	        }
	    }
	    
	    System.out.println(cnt);
	}
}