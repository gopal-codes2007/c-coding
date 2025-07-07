#include<stdio.h>

#include<math.h>
double division(double, double);
int modulus(int, int);
void print_menu();

int main() {
    int choice;
    double first, second, result;
    while(1) {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7) {
            break;
        }
        printf("\nPlease enter the first number : ");
        scanf("%lf", &first);
        printf("Now enter the second number : ");
        scanf("%lf", &second);

        switch (choice)
        {
        
        case 1://add
            result = first + second;
            break;
        case 2://subtract
            result = first - second;
            break;
        case 3://multipy
            result = first * second;
            break;
        case 4://division
            result = division(first, second);
            break;
        case 5://modulus
            result = modulus(first, second);
            break;
        case 6://power
            result = pow(first, second);
            break;
        default:
            break;
        }

        printf("\nResult of operations is : %.2f",result);
    }
    
    return 0;
}

double division(double a, double b) {
    if(b == 0) {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;    
    } else {
        return a / b;
    }    
}

int modulus(int a, int b) {
    if(b == 0) {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;    
    } else {
        return a % b;
    }    
}

void print_menu() {
    printf("\nWelcome to simple calculator. \n");
        printf("\nChoose one of the following options : \n");
        printf("\n 1. Add ");
        printf("\n 2. subsract ");
        printf("\n 3. Multipy ");
        printf("\n 4. Division ");
        printf("\n 5. Modulus ");
        printf("\n 6. power ");
        printf("\n 7. Exit ");
        printf("Now enter your choice ");
            
}