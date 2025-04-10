#include<stdio.h>
int main() {
    int n,arr[500];
    printf("enter the number of students : ");
    scanf("%d", &n);
    printf("Enter the marks of the students : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The marks of the students are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}