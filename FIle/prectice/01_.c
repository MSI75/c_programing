#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    int n;
    fscanf(fptr, "%d\n", &n);
    printf("Integer Number = %d\n", n);
    fscanf(fptr, "%d\n", &n);
    printf("Integer Number = %d\n", n);
    fscanf(fptr, "%d\n", &n);
    printf("Integer Number = %d\n", n);
    fscanf(fptr, "%d\n", &n);
    printf("Integer Number = %d\n", n);
    fscanf(fptr, "%d\n", &n);
    printf("Integer Number = %d\n", n);
    // while (num != EOF)
    // {
    //     printf("%c", num);
    //     num = fgetc(fptr);
    // }

    // printf("\n");

    fclose(fptr);
    return 0;
}