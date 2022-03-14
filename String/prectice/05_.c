#include <stdio.h>
#include <string.h>

void characterN(char str[], char ch);

int main()
{
    char str[] = "Hello World";
    char ch = 'e';
    characterN(str, ch);
    return 0;
}

void characterN(char str[], char ch)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == ch)
        {
            printf("character is paresent \n");
            return;
        }
    }
    printf("character is Not paresent \n");
}