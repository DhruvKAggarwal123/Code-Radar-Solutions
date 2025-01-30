#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int num1 ,num2, num3;
    float fin;
    scanf("%d   %d   %d" , &num1 , &num2 , &num3);
    fin= ( num1+ num2+num3)/3.0;
    printf("Average: %.2f", fin);
    return 0;
}