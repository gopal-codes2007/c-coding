#include<stdio.h>
int main()
{
    float r,a;
    printf("Enter radius : ");
    scanf("%f", &r);
    a = 3.14159 * r * r;
    printf("Area of the circle is  = %f",a);
    return 0;
}