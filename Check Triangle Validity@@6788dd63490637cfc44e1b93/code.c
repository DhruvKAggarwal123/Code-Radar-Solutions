#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a , b ,c ;
    scanf("%d  %d  %d" , &a , &b , &c);
    int aa = a*a;
    int bb = b*b ;
    int cc = c*c;
    if ( aa + bb == cc)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}