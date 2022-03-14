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
    struct student s1;
    strcpy(s1.name, "MSI");
    s1.roll = 187;
    s1.cgpa = 3.75;

    printf("Student name is %s\n Student Roll is %d\n Student cgpa is %f\n", s1.name, s1.roll, s1.cgpa);

    struct student s2;
    strcpy(s2.name, "KZ");
    s2.roll = 188;
    s2.cgpa = 4.33;

    printf("Student name is %s\n Student Roll is %d\n Student cgpa is %f\n", s2.name, s2.roll, s2.cgpa);

    struct student s3;
    strcpy(s3.name, "DH");
    s3.roll = 189;
    s3.cgpa = 4.33;

    printf("Student name is %s\n Student Roll is %d\n Student cgpa is %f\n", s3.name, s3.roll, s3.cgpa);

    return 0;
}