#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    unsigned int a ;
    scanf("%d" , &a);
    printf("%d", __builtin_clz((unsigned int)a));
    return 0;
}