/* #include<stdio.h>

int printTable(int n);

int main(){
    int n;
    printf("Enter the number of N: \n");
    scanf("%d", &n);
    printTable(n); // argument / actual parameter
    return 0;
}

int printTable(int n){ // parameter / formal parameter
    for(int i = 1; i<=10; i++){
        printf(" %d  \n", i * n);
    }
} */


#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 100.00;
    calculatePrice(value);
    printf("value is : %.2f\n", value);
    return 0;
}

void calculatePrice(float value){
    value = value + (0.18*value);
    printf("final price is : %.2f \n", value);
}