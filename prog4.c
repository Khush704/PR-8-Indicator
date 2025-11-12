#include <stdio.h>

int sum(int *p,int *q)
{
    return *p + *q;
}

int main()
{
    int a,b;

    printf("enter of a : ");
    scanf("%d", &a);

    printf("enter of b : ");
    scanf("%d", &b);

    printf("\n entered value is %d and %d",a,b);
    printf("\n sum is %d",sum(&a,&b));

    return 0;
}