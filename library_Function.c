/* #include<stdio.h>
#include<Math.h>

int main(){
    int n;
    printf("Enter the number of n : \n");
    scanf("%d", &n);
    int sqr = pow(n, 2);
    printf("%d", sqr);
    return 0;
} */

#include<stdio.h>


int squareArea(float side);
int circleArea(float red);
int rectangleArea(int a, int b);
int main(){
    float square = squareArea(3.75);
    float circle = circleArea(7.75);
    int rectangle = rectangleArea(7, 5);
    printf("%f\n", square);
    printf("%f\n", circle);
    printf("%d", rectangle);
    return 0;
}

int squareArea(float side){
    return side * side;
}
 
int circleArea(float red){
    return 3.1416 * red * red;
} 

int rectangleArea(int a, int b){
    return a * b;
}