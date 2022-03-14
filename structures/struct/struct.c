#include <stdio.h>
#include <string.h>

// user define
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    // s1.name = "MSI";
    strcpy(s1.name, "MSI");
    s1.roll = 187;
    s1.cgpa = 3.75;

    printf("Student Name is %s\n", s1.name);
    printf("Student Roll Number %d\n", s1.roll);
    printf("Student cgpa is %f\n", s1.cgpa);
    return 0;
}
