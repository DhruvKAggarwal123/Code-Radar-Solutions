#include <stdio.h>

void printTriangle(int n) {
    char ch;
    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
