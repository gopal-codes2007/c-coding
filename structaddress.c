#include<stdio.h>
#include<string.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address arr);

int main() {
    struct address arr[5];
    //take input..
    printf("Enter information for 1st person : ");
    scanf("%d", &arr[0].houseNo);
    scanf("%d", &arr[0].block);
    scanf("%s", arr[0].city);
    scanf("%s", arr[0].state);

    printf("Enter information for 2nd person : ");
    scanf("%d", &arr[1].houseNo);
    scanf("%d", &arr[1].block);
    scanf("%s", arr[1].city);
    scanf("%s", arr[1].state);

    printf("Enter information for 3rd person : ");
    scanf("%d", &arr[2].houseNo);
    scanf("%d", &arr[2].block);
    scanf("%s", arr[2].city);
    scanf("%s", arr[2].state);

    printf("Enter information for 4th person : ");
    scanf("%d", &arr[3].houseNo);
    scanf("%d", &arr[3].block);
    scanf("%s", arr[3].city);
    scanf("%s", arr[3].state);

    printf("Enter information for 5th person : ");
    scanf("%d", &arr[4].houseNo);
    scanf("%d", &arr[4].block);
    scanf("%s", arr[4].city);
    scanf("%s", arr[4].state);

    printAdd(arr[0]);
    printAdd(arr[1]);
    printAdd(arr[2]);
    printAdd(arr[3]);
    printAdd(arr[4]);

    return 0;
}

void printAdd(struct address arr) {
    printf("Address is : %d, %d, %s, %s\n",arr.houseNo,arr.block,arr.city,arr.state);
}