```c
#include <stdio.h>
int main(void){
	int fahrenheit, celsius;
	printf)"Please, enter fahrenheit as an integer: ");
	scan("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8;
	printf("\n %d fahrenheit is %d celsius.\n",
	fahrenheit, celsius);
	return 0;
}
```

La realización de un programa el cual realiza conversión Fahrenheit a Celsius no es casual. Ha sido, de hecho, uno de los primeros programas; o bien, una forma de él es un programa temprano del gran clásico C.

`int main(void){}`: por supuesto, main, por convención. Es donde siempre se empezará el programa, así que C debe siempre tener un main(); en esta situación es técnicamente arreglado, es decir, su tipo de retorno es entero.

`int fahrenheit, celsius;`: usaremos, aunque si quisiéramos mayor precisión científica podríamos usar un double, pero en este preciso caso continuaremos con int como tipo básico de dato para Fahrenheit y Celsius.

`printf)"Please, enter fahrenheit as an integer: ");`: seremos educados, por lo que se pedirá el ingreso de dato, es decir, input.

`scan("%d", &fahrenheit);`: scanf, el cual nos trae el input, tiene un formato de %d, que es un formato para entero, y posteriormente usamos este símbolo de fantasía llamado ampersand. El ampersand (&) significa: meterlo en la dirección de Fahrenheit. No podemos decir Fahrenheit sin el ampersand, porque Fahrenheit es una variable, en este caso queremos la dirección de tal variable, la ubicación en memoria.
