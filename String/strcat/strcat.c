#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "MSI ";
    char lastName[] = "Saif";

    strcat(firstName, lastName);
    puts(firstName);
    return 0;
}