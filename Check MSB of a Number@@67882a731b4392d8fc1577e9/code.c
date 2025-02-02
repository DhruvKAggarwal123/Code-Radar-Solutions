#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    long a ;
    scanf("%ld" ,&a);
    int msb = a & (1 <<  (31));
    if (msb == 1)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}