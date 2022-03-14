#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student ece[100];
    ece[0].cgpa = 8.56;
    ece[0].roll = 113656;
    strcpy(ece[0].name, "MSI");

    printf("Student name is %s\n Student roll is %d\n Student cgpa %.2f\n", ece[0].name, ece[0].roll, ece[0].cgpa);
    return 0;
}