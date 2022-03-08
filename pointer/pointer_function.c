#include<stdio.h>

void square(int n);
void _square(int *n);
int main(){
    int number = 7;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("Number = %d\n", number);

    return 0;
}

// call by value
void square(int n){
    n = n * n;
    printf("Square = %d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("_square = %d\n", *n);
}