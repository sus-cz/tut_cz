#include <stdio.h>

/**
* Prohozeni 2 promennych. 
* 
*/

int main(){
    int x = 20;
    int y = 10;
    
    // 1. Reseni za pomoci dalsi promenne:
    int h;
    h=x;
    x=y;
    y=h;
    
    // 2. Reseni - pro pochopeni je lepsi si to vypocitat na papire.
    //x = x + y;
    //y = x - y;
    //x = x - y;
    
    printf("x = %d / y = %d", x, y);
    
    return 0;
}