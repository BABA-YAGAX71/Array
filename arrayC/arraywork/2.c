#include<stdio.h>
int main(){
    int i,a[5]={89,90,43,78,89,89,32,89},sum=0;

    for(i=0 ; i<5 ; i++){
        sum=sum+a[i];
     }
     printf("SUM=%d\n",sum);
     return 0;
}