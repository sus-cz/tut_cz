#include <stdio.h>

/**
* Uzivatel zada 2 cisla, ktere se spoji. (Napr. 1 + 9 = 19)
* 
*/

int main(){
    char input_1; //nebo int, je to jedno...
    char input_2;
    char result;
    
    printf("1. number = ");
    input_1 = getchar();
    getchar(); // Enter klavesnice z prvniho getchar() casto zustane. Timto se odignoruje.
    printf("2. number = ");
    input_2 = getchar();
    
    // Prevedeni ASCII znaku na cisla
    
    input_1 = input_1 - 48;
    input_2 = input_2 - 48;
    
    // Spojeni
    
    result = input_1 * 10 + input_2;
    
    printf("%d & %d = %d\n", input_1, input_2, result);

    // Kratsi zapis celeho programu:
    // char input_1 = getchar() - 48;
    
    return 0;
}
