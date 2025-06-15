#include<stdio.h>
int main() {
    int r=0,n,on;
    printf("Welcome to reverse & palindrome number !");
    printf("\nEnter the number which number are you want to print : ");
    scanf("%d", &n);
    on=n;
    while(on>0) {
        r=r*10;
        r=r+(on%10);
        on/=10;

    }
    on=n;
    printf("Reverse number is %d\n", r);
    if(r==on) {
        printf("This number is palindrome ...\n");
    }
    else {
        printf("This number is not palindrome number .....");
    }
    return 0;
}
