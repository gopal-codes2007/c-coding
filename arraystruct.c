#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];    
};

int main() {
    struct student it[100];
    it[0].roll = 1;
    it[0].cgpa = 9.3;
    strcpy(it[0].name, "Rajat");

    printf("Name = %s\n", it[0].name);
    printf("roll number = %d\n", it[0].roll);
    printf("cgpa = %f\n", it[0].cgpa);

    return 0;
}

