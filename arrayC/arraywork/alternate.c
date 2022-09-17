//alternate arrays
#include<stdio.h>
int main(){
    int i,array[10];
    

    for(i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
        for(i=0; i<10; i+=2){
            printf("%d\n", array[i]);
        }
    return 0;
}