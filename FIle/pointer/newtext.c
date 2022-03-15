#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("newText.txt", "w");
    if (fptr == NULL)
    {
        printf("new file not creat");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}