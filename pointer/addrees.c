#include<stdio.h>

void printAddress(int n);
void _printAddress(int *n);
int main(){
    int n = 4;
    printf("%p\n", &n);
    printAddress(n);

    printf("%u\n", &n);
    _printAddress(&n);
    return 0;
}
// call by value 
void printAddress(int n){
    printf("Address of n is: %p\n", &n);
}

// call by reference
void _printAddress(int *n){
    printf("Address of n is : %u\n", n);
}