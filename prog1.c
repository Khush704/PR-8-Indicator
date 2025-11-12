#include <stdio.h>

void cube(int size)
{
    int *p[size][size];
    int arr[size][size];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            p[i][j] = &arr[i][j];
        }
        printf("\n");
    }

    printf("\nCube of all elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", *p[i][j] * *p[i][j] * *p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter array size : ");
    scanf("%d", &size);

    cube(size);

    return 0;
}
