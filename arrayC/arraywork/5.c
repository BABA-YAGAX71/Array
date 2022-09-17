#include<stdio.h>
int main(){
    int i,array[100],n;
    scanf("%d\n", &n);

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++){
        if(array[i]%2==0){
            printf("even number=%d\t",array[i]);
        }
    }
    for(i=0; i<n; i++){
        if(array[i]%2!=0){
            printf("odd number=%d\t",array[i]);
        }
    }
    return 0;
}