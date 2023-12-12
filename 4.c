#include <stdio.h>

int main(void){
    int num[3];
    printf("Please enter three numbers\n");
    printf("First NO: ");
    scanf("%d", &num[0]);
    printf("Second NO: ");
    scanf("%d", &num[1]);
    printf("Third NO: ");
    scanf("%d", &num[2]);

    int greatest = num[0];

    if (num[1] > greatest) {
        greatest = num[1];
    }

    if (num[2] > greatest) {
        greatest = num[2];
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}