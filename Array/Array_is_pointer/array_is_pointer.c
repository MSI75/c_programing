// int *ptr = &arr[0];
// int *ptr = arr;


#include<stdio.h>

int main(){

    int aadher[5];

    

    // input array 
    // int *ptr = &aadher[0];

    for(int i = 0; i<5; i++){
        printf("%d index: ", i);
        // scanf("%d", (ptr + i));
        scanf("%d", &aadher[i]);

    }

    // output array 
    for(int i = 0; i<5; i++){
        // printf("%d index of = %d\n", i , *(ptr + i));
        printf("%d index of = %d\n", i , aadher[i]);
    }
    return 0;
}