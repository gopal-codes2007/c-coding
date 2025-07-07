#include<stdio.h>
#include<conio.h>

int main() {
    char str[] = "Introduction to c";
    
    printf("\n |%s|", str);
    printf("\n |%20s|", str);
    printf("\n |%-20s|", str);
    printf("\n |%.4s|", str);
    printf("\n |%20.4s|", str);
    printf("\n |%-20.4s|", str); 
    return 0;
}