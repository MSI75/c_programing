// largest number
/* #include <stdio.h>

int main()
{
    int arr[] = {15, 28, 75, 23, 25, 26};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            return max;
        }
    }
    printf("%d", max);
    return 0;
} */

#include <stdio.h>

int maxArray(int arr[], int n);

int main()
{
    int arr[] = {15, 16, 18, 75, 23};
    int n = sizeof(arr) / sizeof(int);

    printf("%d", maxArray(arr, n));
    return 0;
}

int maxArray(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}