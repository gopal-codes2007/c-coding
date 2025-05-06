#include<stdio.h>
#include<string.h>
int main () {
    char first_name[50];
    char last_name[50];
    printf("Please enyter your first name : ");
    fgets(first_name, 50, stdin);
    printf("Enter your last name : ");
    fgets(last_name, 50, stdin);
    strcat(first_name, last_name);
    printf("Your full name is : %s", first_name);
    return 0;
}