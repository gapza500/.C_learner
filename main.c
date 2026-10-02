#include <stdio.h>

int main(void) {
    int a = 0;
    printf("enter a number: ");
    scanf("%d", &a);
    
    if (a > 0) {
        printf("The number is positive.\n");
    } else if (a < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}