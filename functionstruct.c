#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[50];
};

void printinfo(struct student s1);

int main() {
    struct student s1 = {5, 5.5, "Radha"};
    printinfo (s1);
    return 0;
}

void printinfo(struct student s1) {
    printf("Student information : \n");
    printf("Student roll number  = %d\n", s1.roll);
    printf("Student name = %s\n", s1.name);
    printf("Student cgpa = %f\n", s1.cgpa);

}