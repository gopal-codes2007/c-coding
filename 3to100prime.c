#include<stdio.h>
int main () {
    int i,j,flag;
    for(i=3;i<=100;i++) {
        flag=1;
        for(j=2;j<i;j++) {
            if(i%j == 0) {
                flag=0;
                break;
            }
        }
        if(flag==1) {
            printf("Prime numbers are : %d \n",i);
        }
    }
    return 0;
}