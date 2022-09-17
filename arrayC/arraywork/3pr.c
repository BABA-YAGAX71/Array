//user theke input nite pari!
#include<stdio.h>
int main(){
    int i,instrument[7],total=0;
    printf("enter the instrument price:");
    for(i=0; i<6; i++){
        scanf("%d\t",&instrument[i]);
    }
    for(i=0; i<8; i++){
        total=total+instrument[i];
    }
    printf("TOTAL PRICE=%d",total);
    return 0;
}