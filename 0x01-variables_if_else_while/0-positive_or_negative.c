#include <stdio.h>

int main(void) {
int num;
scanf("%d", &num);
    if (num > 0) {
        printf("%d is greater than zero\n", num);
    } else if (num < 0) {
        printf("%d is less than zero\n", num);
    } else {
        printf("%d is equal to zero\n", num);
    }
    return (0);
}
