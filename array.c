#define max 5
#include<stdio.h>
#include<stdlib.h>

void staticArray(int []);

int main(){
    int list[max];
    staticArray(list);
}

void staticArray(int  a[])
{
    int i;
    printf("Enter the elemnets:");
    for(i=0;i<max;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<max;i++)
    {
        printf("%d",a[i]);
    }
}