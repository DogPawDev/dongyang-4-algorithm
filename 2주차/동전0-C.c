#include <stdio.h>

int main() {

    int nType[10]={0,0,0,0,0,0,0,0,0,0};
    
    int nMax=0; // 동전 종류 수
    int cnt=0;// 동전 갯수
    int k=0;//K원 
    
	scanf("%d %d",&nMax,&k);
	
	for(int i=0;i<nMax;i++){
	    scanf("%d",&nType[i]);
	}
	
    for(int i=9; i>=0;i--){
        if(nType[i] !=0){
            cnt = cnt + k / nType[i];
            k = k % nType[i];
        }else{
            continue;
        }
    }	


  
	
	printf("%d",cnt);
	
	
	
	return 0;
}