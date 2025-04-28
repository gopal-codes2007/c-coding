#include <stdio.h>

int main() {
    int m1,n1,m2,n2,i,j,k;
    int matrix1[10][10] , matrix2[10][10] , product[10][10];

    printf("Enter rows and columns for 1sr matrix : ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns for 2nd matrix : ");
    scanf("%d %d", &m2, &n2);

    if(n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0; // End of program....
    } 

    //give elements of first matrix.
    printf("Enter  elements of 1st matrix : ");
    for(i=0;i<m1;i++) {
        for(j=0;j<n1;j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    //give elements of second matrix.
    printf("Enter  elements of 2nd matrix : ");
    for(i=0;i<m2;i++) {
        for(j=0;j<n2;j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize producr matrix to 0 . 
   
    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices :)

    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            for(k=0;k<n1;k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print the product matrices :)

    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
