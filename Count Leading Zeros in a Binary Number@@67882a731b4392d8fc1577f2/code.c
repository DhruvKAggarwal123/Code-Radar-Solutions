#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a ;
    scanf("%d", &a);
    printf("%d", __builtin_clz(a));
    return 0;
}