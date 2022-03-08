#include<stdio.h>

int main(){
    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("pointer to pointer = %d", **pptr);
    return 0;
}