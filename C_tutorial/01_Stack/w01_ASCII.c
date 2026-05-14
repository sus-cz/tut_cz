#include <stdio.h>

/**
* Strom v ASCII
* 
*/

int main(){
    char leaves = '#';
    char trunk = 'X';
    
    printf("  %c       \n", leaves);
    printf(" %c%c%c    \n", leaves, leaves, leaves);
    printf("%c%c%c%c%c \n", leaves, leaves, leaves, leaves, leaves);
    printf("  %c       \n",trunk);
    printf("  %c       \n",trunk);
    
    return 0;
}