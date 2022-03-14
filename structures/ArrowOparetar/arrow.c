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
    printf("Student.roll %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("Student->roll %d\nStudent -> name %s\nStudent -> cgpa %.2f\n", ptr->roll, ptr->name, ptr->cgpa);

    return 0;
}