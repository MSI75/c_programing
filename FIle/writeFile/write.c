#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("Write.txt", "w");
    fptr = fopen("Write.txt", "a");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'S');
    fprintf(fptr, "%c", 'I');
    fclose(fptr);

    return 0;
}