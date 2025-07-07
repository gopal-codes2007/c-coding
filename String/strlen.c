#include<stdio.h>
#include<string.h>

int main() {
    char name[50];
    printf("please enter your name : ");
    fgets(name,50,stdin);
    int size=strlen(name);
    printf("The lenth of your name is %d",size);
    return 0;
}