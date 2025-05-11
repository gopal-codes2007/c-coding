#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[60];
};

int main() {
    struct student s1 = {1, 7.9, "Robi"};
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    printf("Student name = %s\n", s1.name);

    struct student *ptr = &s1;

    printf("Student roll = %d\n", (*ptr).roll);
    printf("Student cgpa = %f\n", (*ptr).cgpa);
    printf("Student name = %s\n", (*ptr).name);

    return 0;
}