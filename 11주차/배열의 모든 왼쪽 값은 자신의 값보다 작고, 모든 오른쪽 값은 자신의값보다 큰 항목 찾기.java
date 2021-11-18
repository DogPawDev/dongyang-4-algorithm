/*package whatever //do not write package name here */

import java.io.*;

class GFG {
    
    
    public static int findElemnet(int arr[], int n){
        
        int[] leftMax = new int[n];
        int[] rightMin = new int[n];
        
        
        
        
        leftMax[0] = Integer.MIN_VALUE;
        
        for(int i =1; i<n; i++){
            
            if(leftMax[i-1] > arr[i-1])
                leftMax[i] = leftMax[i-1];
            else
                leftMax[i] = arr[i-1];
                
        }
        
        
        rightMin[n-1] = Integer.MAX_VALUE;
        
        for (int i = n-2; i >= 0; i--){
            
            if(rightMin[i+1] > arr[i+1]) 
                rightMin[i] = arr[i+1];
            else 
                rightMin[i] = rightMin[i+1];
        }
        
        
        
        for (int i=0; i < n; i++) {
            
        if (leftMax[i] < arr[i] && rightMin[i] > arr[i])
            return i;
        }
        
        return -1; 
        
        
    }
    
    
	public static void main (String[] args) {
		int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
	//	int arr[] =  {5, 1, 4, 4}; 
		int n = arr.length;
		int idx = findElemnet(arr,n);
		
		System.out.println(idx);
		
	}
}