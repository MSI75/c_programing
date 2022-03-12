/* #include <stdio.h>

int main()
{
    int n, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("%d", rev);
    return 0;
} */

#include <stdio.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[] = {12, 13, 14, 25, 16};
    reverseArray(arr, 5);
    printArray(arr, 5);

    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}