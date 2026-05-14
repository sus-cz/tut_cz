#include <stdio.h>

/**
* Uzivatel zada znak. Program zobrazi jeho ASCII kod.
* 
*/

int main(){
    char input;
    
    printf("Give me a character: ");
    input = getchar();
    
    printf("%d / %c", input, input);
    
    return 0;
}