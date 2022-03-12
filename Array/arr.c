#include<stdio.h>

int main(){
    int marks[3];
    printf("Enter the number of phy : ");
    scanf("%d", &marks[0]);
    printf("Enter the number of chem : ");
    scanf("%d", &marks[1]);
    printf("Enter the number of math : ");
    scanf("%d", &marks[2]);

    printf("phy = %d,  chem = %d, math = %d", marks[0], marks[1], marks[2]);

    return 0;


}