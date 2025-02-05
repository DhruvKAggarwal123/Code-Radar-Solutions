#include <stdio.h>

int main() {
    int num, i, flag = 0;
     scanf("%d", &num);

    // Check if num is greater than 1
    if (num > 1) {
        // Check if num is divisible by any number other than 1 and itself
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        // If flag is 0, num is a prime number
        if (flag == 0) {
            printf("Prime ");
        } else {
            printf(" Not Prime ");
        }
    } else {
        printf("%d is not a valid input. Enter a number greater than 1.\n", num);
    }

    return 0;
}
