#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a ,b ;
    scnaf("%d %d" , &a , &b);
    int result = a | b;

    printf("%d", result);
    return 0;
}