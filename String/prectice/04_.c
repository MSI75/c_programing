#include <stdio.h>
#include <string.h>

void stringCharacter(char str[]);

int main()
{
    char str[] = "amar sonar Bangla ";
    stringCharacter(str);
    return 0;
}

void stringCharacter(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'l')
        {
            printf("Yes");
            printf("\n");
        }
        else
        {
            printf("No");
            printf("\n");
        }
    }
}