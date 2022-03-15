/* #include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fclose(fptr);

    return 0;
} */

#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("int.txt", "w");

    fptr = fopen("int.txt", "r");

    int num;
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fclose(fptr);

    return 0;
}