#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int num1 ,num2, num3;
    
    scanf("%d   %d   %d" , &num1 , &num2 , &num3);
    
    
    printf("Average: %.2f", (num1+num2+num3)/3 );
    return 0;
}