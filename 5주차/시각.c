#include <stdio.h>

int main() {
	//code
	
	
	int n, cnt=0;
	
	scanf("%d",&n);
	
	for (int i=0; i<= n; i++){
	    for(int j=0; j<60; j++){
	        for(int k = 0; k< 60; k++){
	            if (i % 60 == 3 || j / 10 ==3 || j % 10 == 3 || k /10 ==3 || k % 10==3)
	                cnt++;
	        }
	    }
	}
	
	
	printf("%d",cnt);
	
	
	
	
	return 0;
}