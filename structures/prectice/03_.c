#include <stdio.h>

typedef struct account
{
    int account;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "MSI"};
    acc acc2 = {124, "SI"};
    acc acc3 = {125, "S"};

    printf("My account number = %d\nName = %s\n", acc1.account, acc1.name);

    return 0;
}