#include <stdio.h>
#include <memory.h>
int main() {
	//code
	
    int n;
    scanf("%d",&n);
  
    int man[n];
    memset(man,0,n * sizeof(int));
    
    
    int temp=0;
  
    int time=0;
   
    for(int i=0;i<n;i++)
    {
         scanf("%d",&man[i]);
     
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
    
    
    
    int sum=0;
    for(int i=0; i<n; i++){
      time += man[i];
      sum+=time;
    }
    
    printf("%d",sum);
 
	
	return 0;
}