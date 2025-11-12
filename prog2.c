#include <stdio.h>

int main()
{
    char str[20];
    char *ptr;
    int length = 0;
    ;

    printf("Enter any string : ");
    gets(str);

    ptr = str;

    for (length = 0; *ptr != '\0'; length++)
    {
        ptr++;
    }

    printf("The length of a string is : %d", length);

    return 0;
}