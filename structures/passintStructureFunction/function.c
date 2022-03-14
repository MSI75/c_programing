#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {"MSI", 113656, 3.75};
    printInfo(s1);

    s1.roll = 16660;
    printf("Student roll number %d\n", s1.roll);
    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information: \n");
    printf("Student roll number %d\n", s1.roll);
    printf("Student name %s\n", s1.name);
    printf("Student cgpa %.2f\n", s1.cgpa);

    s1.roll = 16660;
}