#include<stdio.h>

int cube(int *p)
{
    return *p * *p * *p;
}

int main()
{
    int a;

    printf("enter of a : ");
    scanf("%d",&a);

    printf("\n cube of %d is %d",a,cube(&a));

    return 0;
}