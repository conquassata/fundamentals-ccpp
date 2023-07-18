En la programación en C, los tipos de datos son declaraciones de variables. Esto determina el tipo y el tamaño de los datos asociados con las variables. Por ejemplo:

```c
char a = 'C'; // single character    %c
char b[] = "Bro"; // array of characters %s  

float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

bool e = true; // 1 byte (true or false) %d

char f = 120; // 1 byte (-128 to +127) %d or %c
unsigned char g = 255; // 1 byte (0 to +255) %d or %c

short h = 32767; // 2 bytes (−32,768 to +32,767) %d
unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

printf("%c\n", a);  // char
printf("%s\n", b);  // character array
printf("%f\n", c);  // float
printf("%lf\n", d); // double
printf("%d\n", e);  // bool
printf("%d\n", f);  // char as numeric value
printf("%d\n", g);  // unsigned char as numeric value
printf("%d\n", h);  // short
printf("%d\n", i);  // unsigned short
printf("%d\n", j);  // int
printf("%u\n", k);  // unsigned int
printf("%lld\n", l);  // long long int
printf("%llu\n", m);  // unsigned long long int
```
# Int Data Type
Aquí, es una variable de tipo (entero). Los enteros son números enteros que pueden tener valores cero, positivos o negativos, pero no valores decimales. El tamaño de suele ser de 4 bytes (32 bits). 

```c
// C program to print Integer data types.
#include <stdio.h>

int main()
{
	// Integer value with positive data.
	int a = 9;

	// integer value with negative data.
	int b = -9;

	// U or u is Used for Unsigned int in C.
	int c = 89U;

	// L or l is used for long int in C.
	long int d = 99998L;

	printf("Integer value with positive data: %d\n", a);
	printf("Integer value with negative data: %d\n", b);
	printf("Integer value with an unsigned int data: %u\n",
		c);
	printf("Integer value with an long int data: %ld", d);

	return 0;
}

```

# Float Data Type
En la programación C, el [tipo de datos] punto-flotante se utiliza para almacenar valores de coma flotante. Float en C se utiliza para almacenar valores decimales y exponenciales. Se utiliza para almacenar números decimales (números con valores de coma flotante) con precisión simple.

```c
// C Program to demonstrate use
// of Floating types
#include <stdio.h>

int main()
{
	float a = 9.0f;
	float b = 2.5f;

	// 2x10^-4
	float c = 2E-4f;
	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f", c);

	return 0;
}
```
# Tipo de datos doble

Un [tipo de datos Double] en C se utiliza para almacenar números decimales (números con valores de coma flotante) con doble precisión. Se utiliza para definir valores numéricos que contienen números con valores decimales en C.

El tipo de datos doble es básicamente un tipo de tipo de datos de precisión que es capaz de contener 64 bits de números decimales o puntos flotantes. Dado que el doble tiene más precisión en comparación con ese flotador, entonces es mucho más obvio que ocupa el doble de la memoria ocupada por el tipo de punto flotante. Puede acomodar fácilmente alrededor de 16 a 17 dígitos después o antes de un punto decimal.

```c
// C Program to demonstrate
// use of double data type
#include <stdio.h>

int main()
{
	double a = 123123123.00;
	double b = 12.293123;
	double c = 2312312312.123123;

	printf("%lf\n", a);

	printf("%lf\n", b);

	printf("%lf", c);

	return 0;
}
```
# **Tipo de datos Void**

El tipo de datos void en C se utiliza para especificar que no hay ningún valor presente. No proporciona un valor de resultado a su autor de la llamada. No tiene valores ni operaciones. Se utiliza para no representar nada. Void se usa de varias maneras como tipo de retorno de función, argumentos de función como void y [punteros a void].

```c
// C program to demonstrate
// use of void pointers
#include <stdio.h>

int main()
{
	int val = 30;
	void* ptr = &val;
	printf("%d", *(int*)ptr);
	return 0;
}
```
# Tamaño de los tipos de datos en C

El tamaño de los tipos de datos en C depende del tamaño de la arquitectura, por lo que no podemos definir el tamaño universal de los tipos de datos. Para eso, el lenguaje C proporciona el operador sizeof() para verificar el tamaño de los tipos de datos.

```c
// C Program to print size of
// different data type in C
#include <stdio.h>

int main()
{
	int size_of_int = sizeof(int);
	int size_of_char = sizeof(char);
	int size_of_float = sizeof(float);
	int size_of_double = sizeof(double);

	printf("The size of int data type : %d\n", size_of_int);
	printf("The size of char data type : %d\n",
		size_of_char);
	printf("The size of float data type : %d\n",
		size_of_float);
	printf("The size of double data type : %d",
		size_of_double);

	return 0;
}
```

