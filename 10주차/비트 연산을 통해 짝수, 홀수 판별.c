#include <stdio.h>

int main() {
	
	
	int n=0;
   
    scanf("%d",&n);
    printf("Input: N = %d\n",n);
    printf("Output : ");
    if( n & 1 == 1){
        printf("Odd");
        //홀수 
    }else{
        printf("Even");
        //짝수
    }
	
	//N을 1과 AND한 값은, 홀수이면 1 짝수이면 0이다.
	
	return 0;
}