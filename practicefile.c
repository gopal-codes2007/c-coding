#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    char ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    printf("\nThanks for thinking :->");
    return 0;
}
