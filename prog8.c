#include<stdio.h>

int main()
{
    int a;
    int *p;

    printf("enter number : ");
    scanf("%d",&a);

    p = &a;

    printf("\n address of %d is : %d",a,p);

    return 0;
}