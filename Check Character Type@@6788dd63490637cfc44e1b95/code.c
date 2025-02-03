#include <stdio.h>
#include <ctype.h>

int main() {
    char a ;
    scanf("%c" , &a);
    if (isaplha(a)){
        if ( a == "a" || 'e' || 'i' || 'o'|| 'u'|| 'A' || 'E' || 'I' || 'O' || 'U')
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