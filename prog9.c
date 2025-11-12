#include<stdio.h>

int main()
{
    int a;

    printf("enter a : ");
    scanf("%d",&a);

    int *p = &a;
    int **p1 = &p;

    printf("\n a is : %d",a);
    printf("\n a is : %d",p);
    printf("\n a is : %d",p1);

    return 0;
}