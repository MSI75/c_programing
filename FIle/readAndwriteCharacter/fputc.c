#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("Write.txt", "w");

    fputc('M', fptr);
    fputc('S', fptr);
    fputc('I', fptr);
    fclose(fptr);

    return 0;
}