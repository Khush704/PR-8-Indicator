#include <stdio.h>

int main()
{
    int arr[5] = {11,88,46,79,58};
    int *p[5];

    for (int i = 0; i < 5; i++)
    {
        p[i] = &arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        *p[i] = *p[i] * *p[i];
    }

    printf("arr is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
