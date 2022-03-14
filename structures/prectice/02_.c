#include <stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number = {5, 8};

    struct complex *ptr = &number;

    printf("real-> part %d\n", ptr->real);
    printf("img -> part %d\n", ptr->img);
    return 0;
}