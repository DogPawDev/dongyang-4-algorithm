/*package whatever //do not write package name here */

import java.io.*;
import java.util.Scanner;
class Main {
	public static void main (String[] args) {

		Scanner scan = new Scanner(System.in);
		
		int[] man;
		int temp=0;
        int time=0;
        int sum=0;
		
		
		int n = scan.nextInt();
	    man = new int[n];
	    
		for(int i=0;i<n;i++)
        {
             man[i] = scan.nextInt();
     
        }
		
		
		
		
		for (int i = 0; i < n - 1; i++)
		{
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (man[j] > man[j + 1])
                {
                  temp = man[j];
                   man[j]     = man[j + 1];
                   man[j + 1] = temp;
                }
            }
         }
    
		for(int i=0; i<n; i++)
		{
            time += man[i];
            sum+=time;
        }
        
        System.out.println(sum);
        
        
        
	}
}