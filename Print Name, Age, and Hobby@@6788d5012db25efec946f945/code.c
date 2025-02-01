#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {

    char n[100] , h[100];
    int a;
    scanf("%s %d %s", &n , &a , &h);
    printf("Name: %s \n", n);
    printf("Age: %d \n" , a);
    printf("Hobby: %s", h);
    return 0;
}