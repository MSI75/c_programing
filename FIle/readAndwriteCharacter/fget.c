#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    // fgetc(fptr);
    printf("character = %c", fgetc(fptr));
    fclose(fptr);
    return 0;
}