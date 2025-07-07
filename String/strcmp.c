#include<stdio.h>
int main() {
    char str1[50];
    printf("Please enter your name  :");
    fgets(str1, 50, stdin);
    char str2[50];
    printf("Please enter your address  :");
    fgets(str2, 50, stdin);
    char strcmp;
    strcmp(str1, str2);
    printf("Compare string is : %s",str1);
    return 0;
}