#include<stdio.h>
#include<string.h>

struct complex {
    int real;
    int img;
};

int main() {
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;

    printf("Real part is = %d\n", ptr->real);
    printf("Imaginary part is = %d", ptr->img);

    return 0;
}