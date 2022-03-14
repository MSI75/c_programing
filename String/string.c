#include <stdio.h>

void stringFunc(char arr[]);

int main()
{
    char firstName[] = "Saiful Islam";
    char lastName[] = "MSI";
    stringFunc(firstName);
    stringFunc(lastName);
    return 0;
}

void stringFunc(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}