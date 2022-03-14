// insert the element of the array

/* #include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int posion = 4;
    int x = 50;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
        // printf("%d\n", arr[i]); // 1, 2, 3, 4, 5, 6
    }
    for (int i = n - 1; i >= posion; i--)
    {
        arr[posion - 1] = x;
        // printf("%d \n", arr[posion - 1]); // 50
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}
 */

#include <stdio.h>

int printFunc(int arr[], int n, int possion, int x);
int possionFunc(int arr[], int n, int possion, int x);
int printPossion(int arr[], int n, int possion, int x);

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    int possion = 3;
    int x = 75;

    printFunc(arr, n, possion, x);
    possionFunc(arr, n, possion, x);
    printPossion(arr, n, possion, x);

    return 0;
}

// Print Array
int printFunc(int arr[], int n, int possion, int x)
{
    for (int i = 0; i < n; i++)
    {
        return arr[i] = i + 1;
    }
}

// Possion Array
int possionFunc(int arr[], int n, int possion, int x)
{
    for (int i = n - 1; i >= possion; i--)
    {
        return arr[possion - 1] = x;
    }
}

// Print Output
int printPossion(int arr[], int n, int possion, int x)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}