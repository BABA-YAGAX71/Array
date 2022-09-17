#include<stdio.h>
int main()
{
    int i,array[100],n,max=0;

    printf("enter the numbers:");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=1; i<n; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }

    printf("maximum number=%d\n",max);

    return 0;
}