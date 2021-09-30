
import java.io.*;

class Main {
	public static void main (String[] args) {
		
		int arr[] ={6, 0, 8, 2, 3, 0, 4, 0, 1};
		int n = arr.length;
		int j = 0;
		
		for(int i=0; i<n; i++){
		    if(arr[i] != 0){
		        arr[j] = arr[i];
		        j++;
		    }
		}
		
		
		for(int i=j; i<n; i++){
		    arr[i] = 0;
		}
		System.out.printf("{ ");
		
		for(int i=0; i<n; i++){
		    System.out.printf("%d ",arr[i]);
		}
		System.out.printf("}");
		
	}
}