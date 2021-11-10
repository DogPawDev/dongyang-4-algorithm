#include <stdio.h>


char* toggleCase(char * str)
{
    for(int i=0; str[i]!='\0';i++){
        str[i] ^= 32;
    }//XOR
    
    return str;
}
int main() {
	

    char str[100];
    scanf("%s",str);	
	//GeekSfOrgEEKs
	
	printf("Input : %s\n",str);
	printf("Output : %s",toggleCase(str));
	
	
	
	return 0;
}