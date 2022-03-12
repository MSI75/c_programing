#include<stdio.h>

int main(){
    // 2 x 3 
    int marks[2][3]; // --- || ---
    marks[0][0] = 98;
    marks[0][1] = 97;
    marks[0][2] = 95;

    marks[1][0] = 90;
    marks[1][1] = 94;
    marks[1][2] = 92;

    printf("%d", marks[1][1]);
}