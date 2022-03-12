/* #include<stdio.h>
void printNumer(int *arr, int n);

int main(){
    int arr[] = {1, 2, 3, 4, 6, 8};
    printNumer(arr, 6);
    return 0;
}

void printNumer(int *arr, int n){
    for(int i = 0; i<n; i++){
        printf("%d \t", arr[i]);
    }
} */
   


#include<stdio.h>

void printNumer(int arr[], int n);

int main(){
    int arr[] = {1, 3, 8, 7, 5, 6};
    printNumer(arr, 6);
    return 0;
}

void printNumer(int arr[], int n){
    for(int i = 0; i <n; i++){
        printf("%d \t", arr[i]);
    }
}

   