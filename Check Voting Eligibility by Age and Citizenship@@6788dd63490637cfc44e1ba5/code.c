#include <stdio.h>

int main() {
    int age, citizenship;
    // printf("Enter age and citizenship status (1 for citizen, 0 for non-citizen): ");
    scanf("%d %d", &age, &citizenship);

    if (age >= 18 && citizenship == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
