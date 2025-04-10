#include<stdio.h>
int main() {
    int n,i,math[200],eng[200],tot[200];
    printf("enter the number of students : ");
    scanf("%d", &n);
    printf("enter the marks for math : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &math[i]);
    }
    printf("enter the marks for eng : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &eng[i]);
    }
    for(i=0;i<n;i++)
    {
        tot[i]=math[i] + eng[i];
    }
    printf("total marks for students is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", tot[i]);
    }
    return 0;
}