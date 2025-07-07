#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void generateeOtp() {
    char otp[6],votp[6],c;
    int i;
    srand((unsigned)time(NULL));
    for(i=0;i<5;i++) {
        c=rand() % 10 + 48;
        otp[i] = c;
    }
    otp[i] = '\0';
    printf("OTP genereted: %s",otp);
}

int main() {
    generateeOtp();
}