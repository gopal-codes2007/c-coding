#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "w");
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'I');
    fclose(fptr);
    return 0;
}