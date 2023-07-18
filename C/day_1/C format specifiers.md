El especificador de formato en C se utiliza para informar al compilador sobre el tipo de datos que se imprimirán o escanearán en las operaciones de entrada y salida. Siempre comienzan con un símbolo **%** y se utilizan en la cadena formateada en funciones como printf(), scanf, sprintf(), etc. El lenguaje C proporciona una serie de especificadores de formato que están asociados con los diferentes tipos de datos.

```c
#include <stdio.h>
int main(){
	// format specifier % = defines and formats a type of data to be displayed
	// %c = character
	// %s = string (array of characters)
	// %f = float
	// %lf = double
	// %d = integer
	// %.1 = decimal precision
	// %1 = minimum field width
	// %- = left align
	float item1 = 5.75;
	float item2 = 10.00;
	float item3 = 100.99;
	
	printf("Item 1: $%8.2f\n", item1);
	printf("Item 2: $%8.2f\n", item2);
	printf("Item 3: $%8.2f\n", item3);
	return 0;
}
```