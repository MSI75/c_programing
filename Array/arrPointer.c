// 01. intiger 

/* 

#include<stdio.h>

int main(){
    int age = 75;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
} 

*/

// 02. float 

/*  #include<stdio.h>

int main(){
    float n = 75.75;
    float *ptr = &n;

    printf("ptr = %u\n", ptr);

    ptr++;
    printf("ptr = %u\n", ptr);

    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}  */

// 03. character 
#include<stdio.h>

int main(){
    char ch = '*';
    char *ptr = &ch;

    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    return 0;
} 