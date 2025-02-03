#include <stdio.h>
#include <ctype.h>

int main() {
    char a ;
    scanf("%c" , &a);
    if (isaplha(a))
        if ( a == "a" ||a =='e' || a == 'i' || a == 'o'|| a =='u'|| a=='A' || a == 'E' || a == 'I' || a=='O' || a =='U'){
        printf("Vowel");}
        else {
        printf("Consonant");
    }
    else if ( ifdigit(a))
    printf("Digit");
    else 
    printf("Special Character");
    return 0;
}