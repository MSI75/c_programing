#include <stdio.h>
#include <string.h>

typedef struct computerscienceengineeringstudent
{
    char name[100];
    int roll;
    float cgpa;
} coe;

int main()
{
    coe s1;
    s1.roll = 113656;
    s1.cgpa = 3.75;
    strcpy(s1.name, "MSI");

    printf("Student name %s\nStudent roll %d\nStudent cgpa %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}