#include <stdio.h>
#include <math.h>


int getPosOfRightmostSetBit(int n){
    return log2(~n&(n+1))+1;
    // NOT 
}

int setRightmostUnsetBit(int n){
    if (n == 0)
        return 1;
    if ((n & (n + 1)) == 0)
        return n;
    
    int pos = getPosOfRightmostSetBit(n);
    
    return ((1<<(pos-1))|n);
}


int main() {
    
    int n=0;
    
    scanf("%d",&n);
    printf("input : %d\n",n);
    
    printf("output : %d",setRightmostUnsetBit(n));
    
    
    return 0;
}