// insert the element of the array

#include <stdio.h>

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
