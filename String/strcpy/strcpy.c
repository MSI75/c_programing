#include <stdio.h>
#include <string.h>

int main()
{
    char oldStr[] = "oldString";
    char newStr[] = "newString";

    strcpy(newStr, oldStr);
    puts(oldStr);
    puts(newStr);
    return 0;
}