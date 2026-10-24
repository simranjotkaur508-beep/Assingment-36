#include <stdio.h>
#include <string.h>

void compare(char str1[], char str2[])
{
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    compare(str1, str2);

    return 0;
}