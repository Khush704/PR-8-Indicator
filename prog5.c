#include <stdio.h>

int main()
{
    int a = 10, *p;
    p = &a;

    *p = 103;

    printf("add of a : %d", a);
    printf("add of a : %d", *p);

    return 0;
}