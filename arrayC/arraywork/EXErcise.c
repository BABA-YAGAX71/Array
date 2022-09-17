#include<stdio.h>
int main(){
    int i,sum=0,n,packet[100];
    printf("how many packet of bisquits:");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &packet[i]);
    }
    for(i=0; i<n; i++){
        sum=sum+packet[i];
    }
    printf("total price=%d",sum);
    return 0;
}