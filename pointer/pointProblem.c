// 01. Write a program in c to find the maximum number between to numbers using a point 
/* 

#include<stdio.h>

int main(){
    int a, b;
    int *n1 = &a;
    int *n2 = &b;
    printf("Enter the number of a : \n");
    scanf("%d", n1);
    printf("Enter the number of b: \n");
    scanf("%d", n2);
    

    if(*n1 > *n2){
        printf("Maximum number = %d", *n1);
    }
    else{
        printf("Maximum number = %d", *n2);
    }
    return 0;
} 


*/

// 02. Write a program in C to print the element of an array in revares order 

/* #include<stdio.h>

int main(){
    int n, i, arr[15];

    int *prt = &arr[0];

    printf("Enter the numebr of n: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array : \n", n);

    for(i = 0; i<n; i++){
        printf("Element - %d \n", i + 1);
        scanf("%d", prt);
        prt++;
    }

    prt = &arr[n - 1];

    printf("Input %d number of elements in the array : \n", n);

    for(i = n; i>0; i--){
        printf("Element - %d\n", i , *prt);
        prt--;
    }
    printf("\n");
    return 0
} */

// 03. Write a program in C to print all the letters in English alphabate using a pointer 
#include<stdio.h>

int main(){
    char alph[26];
    int x;
    char *ptr = &alph[0];

    for(x = 0; x<26; x++){
        *ptr = x + 'A';
        ptr++;
    }

    ptr = alph;

    printf("The alphabate are : \n");
    for(x=0; x<26; x++){
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}