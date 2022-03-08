#include<stdio.h>

int doWork(int a, int b, int *sum, int *mult, int *avg);

int main(){
    int a = 7, b = 5;
    int sum , mult, avg;
    doWork(a, b, &sum, &mult, &avg);
    printf("sum = %d & mult = %d & avg = %d", sum, mult, avg);
    return 0;
}

int doWork(int a, int b, int *sum, int *mult, int *avg){
    *sum = a + b;
    *mult = a * b;
    *avg = (a+b)/2;
}