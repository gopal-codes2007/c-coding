#include<stdio.h>
int main() {
    int n,i,j;
    int matrix[10][10];
    int trace = 0;
    printf("Enter the size of the square matrix (n * n) : ");
    scanf("%d", &n);
    printf("Enter the elements of matrix : \n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0;i<n;i++) {
        trace = trace + matrix[i][i];
    }
    printf("The trace of the matrix is : %d\n",trace);
    return 0;
}