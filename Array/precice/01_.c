// In a array of numbers, find how many times does a number 'x' occurs

#include <stdio.h>

int manyFunc(int arr[], int n, int x);

int main()
{
    int arr[] = {1, 2, 7, 7, 7, 5, 7, 7};
    int n = sizeof(arr) / sizeof(int);
    int x = 7;
    printf("%d", manyFunc(arr, n, x));

    return 0;
}

int manyFunc(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    return count;
}