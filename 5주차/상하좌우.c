#include <stdio.h>
#include <string.h>
int main() {
	//code
	
	char plan[100];
	
	int size;
	
	int x=1;
	int y=1;
	
	int dx[4]={0,0,-1,1};

	int dy[4]={-1,1,0,0};
	char moveType[4]={'L','R','U','D'};
	
	
	
	
    scanf("%d\r",&size);	
	gets(plan);
	int map[size][size];
	
	int nx=1;
	int ny=1;
	
	
	for(int i=0; i<strlen(plan); i++){
	   
	    if(plan[i] == '\0')
	        break;
	    else if (plan[i] != ' '){
	        
	        for(int j=0; j<4; j++){
	            if(plan[i] == moveType[j] ){
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
	
	printf("%d %d",x,y);
	


	
	
	return 0;
}