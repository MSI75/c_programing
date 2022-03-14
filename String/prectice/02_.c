#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main()
{
    char str[] = "HelloWorld";
    slice(str, 3, 6);
    return 0;
}

void slice(char str[], int n, int m)
{
    char newString[100];
    int j = 0;
    for (int i = n; i <= m; i++)
    {
        newString[j] = str[i];
        j++;
    }
    newString[j] = '\0';
    puts(newString);
}