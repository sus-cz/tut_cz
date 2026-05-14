#include <stdio.h>

/**
* Velka pismena se zmeni na mala
* 
*/

int main(){
    char input_1; 
    
    printf("Character = ");
    input_1 = getchar();
    
    printf("Result = %c ", input_1 + 32);
    
    return 0;
}
