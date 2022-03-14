#include <stdio.h>
#include <string.h>

void vowel(char str[], int n);

int main()
{
    char str[] = "hello World. amar sonar bagla ami toamai valo vashu";
    int n = strlen(str);
    vowel(str, n);
    return 0;
}

void vowel(char str[], int n)
{
    char newStr[200];
    int j = 0;
    for (int i = 0; i <= n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';
    puts(newStr);
}