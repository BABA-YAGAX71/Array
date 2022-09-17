#include<stdio.h>
int main(){
    int n,i,a[]={23,11,10,25,16};
    int pos=-1;

    printf("enter the value:");
    scanf("%d", &n);

    for(i=0; i<6; i++)
    {
        if(n==a[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("the value is not found");
    }
    else
    {
        printf("the value is at %d",pos);
    }
    return 0;
}