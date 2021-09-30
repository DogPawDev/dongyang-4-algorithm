#include <stdio.h>

int main() {
	
	int arr[] ={6, 0, 8, 2, 3, 0, 4, 0, 1};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int j = 0;
	
	for (int i=0; i<n ;i++){
	    
	    if (arr[i] !=0){
	        arr[j] = arr[i];
	        j++;
	    }
	}
	
	for(int i=j;i<n;i++){
	    arr[i]=0;
	    
	}
	printf("{ ");
	for(int i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
	printf("}");
	
	return 0;
}