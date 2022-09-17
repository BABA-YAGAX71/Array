// ecchamoton input nite pari user theke then jekono kisu korte pari!

#include<stdio.h>
int main(){
    int i,veg[100],sum=0,a;
    printf("how many vegetables:");
    scanf("%d", &a);

    for(i=0 ; i<a ; i++){
        scanf("%d",&veg[i]);
    }
    for(i=0; i<a ; i++){
        sum=sum+veg[i];
    }
    printf("total cost=%d",sum);
    return 0;
}