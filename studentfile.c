#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");
     
    char name[100];
    int age;
    float cgpa;

    printf("Enter the name of the students: ");
    scanf("%s", name);
    printf("Enter the age of the students: ");
    scanf("%d", &age);
    printf("Enter the cgpa of the students: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", age);
    fprintf(fptr, "%f\n", cgpa);

    fclose(fptr);

    return 0;
}