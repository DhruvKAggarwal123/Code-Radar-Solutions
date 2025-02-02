#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a ;
    scanf("%d" ,&a);
    int msb = 1 << ( 31 - _builtin_clz(a));
    if (msb == 1)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}