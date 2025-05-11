#include<stdio.h>
#include<string.h>

typedef struct Bankouccount {
    int accountNo;
    char name[50];
}acc;

int main() {
    acc acc1 = {107, "Pravat"};
    acc acc2 = {108, "Sudip"};
    acc acc3 = {109, "beauty"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("Name = %s\n", acc1.name);

    printf("acc no = %d\n", acc2.accountNo);
    printf("Name = %s\n", acc2.name);

    printf("acc no = %d\n", acc3.accountNo);
    printf("Name = %s\n", acc3.name);

    return 0;

}