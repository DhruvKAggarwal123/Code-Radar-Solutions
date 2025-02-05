#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 1) {
        if (num <= 100) {
            printf("In Range\n");
        } else {
            printf("Out of Range\n");
        }
    } else {
        printf("Out of Range\n");
    }

    return 0;
}
