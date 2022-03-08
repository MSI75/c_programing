#include<stdio.h>

void swapFunc(int a, int b);
void _swapFunc(int *a, int *b);
int main(){
    int a = 7, b = 5;
    swapFunc(a, b);
    printf("a = %d & b = %d\n", a, b);
    _swapFunc(&a, &b);
    printf("a = %d & b = %d\n", a, b);
    return 0;
}

// call by value
void swapFunc(int a, int b){
   int s = a;
    a = b;
    b = s;
    printf("a = %d & b = %d\n", a , b);
}

// call by Reference
void _swapFunc(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;
    printf("*a = %d & *b = %d\n", *a, *b);
}