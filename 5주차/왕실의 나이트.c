#include <stdio.h>

int main() {
	//code
	
	
	
	int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	
	char input[3];
	
	scanf("%s",input);
	
	int row = input[1] - '0';
    int col = input[0] - 'a' + 1;
    int result=0;
    
    for(int i=0; i<8;i++){
        
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];
        
        if (nextRow >= 1 && nextRow <= 8 && nextCol >= 1 && nextCol <= 8)
            result++;

        
        
    }
    
	
	printf("%d",result);
	
	return 0;
}