#include <stdio.h>
#include <string.h>

void vowelUppercase(char str[]);

int main()
{
    char str[100];
    printf("Enter a string \n");
    gets(str);
    vowelUppercase(str);
    return 0;
}

void vowelUppercase(char str[])
{
    char newStr[200];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';
    puts(strupr(newStr));
}
