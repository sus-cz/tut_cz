#include <stdio.h>

/**
* Program, ktery vypise max/min hodnoty typu int/char.
* Promenne se zde pouzivat nemusi, ale chtel jsem ukazat, zde to jde taky.
*
*/

int main(){
	const int INT_MAX = 2147483647;
	const int INT_MIN = -2147483648;
	const unsigned int U_INT_MAX = 4294967295;

	printf("===== CHAR =====\n");
	printf("\t Unsigned: 0 >> 255\n");
	printf("\t Signed: -128 >> 127\n");

	printf("===== INT =====\n");
	// '%d' nezvladne vytisknout U_INT_MAX hodnotu kvuli velikosti, proto se musi pouzit '%u'.
	printf("\t Unsigned: 0 >> %u \n", U_INT_MAX); 
	printf("\t Signed: %d >> %d \n", INT_MIN, INT_MAX);

	return 0;
}
