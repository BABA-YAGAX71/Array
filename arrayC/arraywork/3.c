//jekono kisur sum,average ber korte pari
#include<stdio.h>
int main(){
    int i,sub[10],sum=0;
    printf("enter marks of the subjects:");
    for(i=0 ; i<10 ; i++){
        scanf("%d", &sub[i]);
    }

    for(i=0 ; i<5 ; i++){
        sum=sum+sub[i];
    }
    printf("total marks=%d",sum);
    return 0;
}