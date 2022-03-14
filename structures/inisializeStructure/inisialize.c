#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"MSI", 113656, 3.75};
    printf("Student name %s\n Student roll %d\n Student cgpa %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}