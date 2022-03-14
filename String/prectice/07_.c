#include <stdio.h>
#include <string.h>

int main()
{
    char sortName[] = "MSI";
    char fullName[] = "Mohammod Saiful Islam";
    strcat(sortName, fullName);
    puts(sortName);
    return 0;
}