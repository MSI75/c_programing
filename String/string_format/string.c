#include <stdio.h>

void stringFunc(char arr[]);

int main()
{
    // char name[75];
    // printf("Enter your name :");
    // scanf("%s", name);
    // printf("Your name %s ", name);

    char fullName[100];
    scanf("%s", fullName);
    printf("Your full name %s", fullName);

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
