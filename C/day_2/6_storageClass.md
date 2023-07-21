Las clases de almacenamiento C se utilizan para describir las características de una variable/función. Estas características incluyen básicamente el alcance, la visibilidad y la vida útil que nos ayudan a rastrear la existencia de una variable particular durante el tiempo de ejecución de un programa.

![image](https://github.com/ainfanthe/langLearningNotes/assets/105471058/5898f790-b4f0-40a2-a191-30566bc6e968)

## 1. Extern
La clase de almacenamiento extern simplemente nos dice que la variable se define en otro lugar y no dentro del mismo bloque donde se usa. Básicamente, el valor se le asigna en un bloque diferente y esto también se puede sobrescribir / cambiar en un bloque diferente. Por lo tanto, una variable externa no es más que una variable global inicializada con un valor legal donde se declara para ser utilizada en otro lugar. Se puede acceder a él dentro de cualquier función / bloque.

Además, una variable global normal también se puede hacer extern colocando la palabra clave 'extern' antes de su declaración / definición en cualquier función / bloque. Esto básicamente significa que no estamos inicializando una nueva variable, sino que estamos usando / accediendo solo a la variable global. El objetivo principal del uso de variables extern es que se puede acceder a ellas entre dos archivos diferentes que forman parte de un programa grande.

## 2. Static
Esta clase de almacenamiento se utiliza para declarar variables static que se utilizan popularmente al escribir programas en lenguaje C. Las variables estáticas tienen la propiedad de preservar su valor incluso después de que están fuera de su alcance. Por lo tanto, las variables estáticas conservan el valor de su último uso en su ámbito. Así que podemos decir que se inicializan una sola vez y existen hasta la terminación del programa. Por lo tanto, no se asigna ninguna memoria nueva porque no se vuelven a declarar.

Su alcance es local a la función para la que fueron definidos. Se puede acceder a las variables estáticas globales desde cualquier lugar del programa. De forma predeterminada, el compilador les asigna el valor 0.

## 3. Register
Esta clase de almacenamiento declara variables de registro que tienen la misma funcionalidad que la de las variables automáticas. La única diferencia es que el compilador intenta almacenar estas variables en el registro del microprocesador si hay un registro libre disponible. Esto hace que el uso de las variables de registro sea mucho más rápido que el de las variables almacenadas en la memoria durante el tiempo de ejecución del programa.

Si un registro gratuito no está disponible, estos se almacenan solo en la memoria. Por lo general, algunas variables a las que se debe acceder con mucha frecuencia en un programa se declaran con la palabra clave register, lo que mejora el tiempo de ejecución del programa. Un punto importante e interesante a tener en cuenta aquí es que no podemos obtener la dirección de una variable de registro utilizando punteros.

```c
// A C program to demonstrate different storage
// classes
#include <stdio.h>

// declaring the variable which is to be made extern
// an initial value can also be initialized to x
int x;

void autoStorageClass()
{

	printf("\nDemonstrating auto class\n\n");

	// declaring an auto variable (simply
	// writing "int a=32;" works as well)
	auto int a = 32;

	// printing the auto variable 'a'
	printf("Value of the variable 'a'"
		" declared as auto: %d\n",
		a);

	printf("--------------------------------");
}

void registerStorageClass()
{

	printf("\nDemonstrating register class\n\n");

	// declaring a register variable
	register char b = 'G';

	// printing the register variable 'b'
	printf("Value of the variable 'b'"
		" declared as register: %d\n",
		b);

	printf("--------------------------------");
}

void externStorageClass()
{

	printf("\nDemonstrating extern class\n\n");

	// telling the compiler that the variable
	// x is an extern variable and has been
	// defined elsewhere (above the main
	// function)
	extern int x;

	// printing the extern variables 'x'
	printf("Value of the variable 'x'"
		" declared as extern: %d\n",
		x);

	// value of extern variable x modified
	x = 2;

	// printing the modified values of
	// extern variables 'x'
	printf("Modified value of the variable 'x'"
		" declared as extern: %d\n",
		x);

	printf("--------------------------------");
}

void staticStorageClass()
{
	int i = 0;

	printf("\nDemonstrating static class\n\n");

	// using a static variable 'y'
	printf("Declaring 'y' as static inside the loop.\n"
		"But this declaration will occur only"
		" once as 'y' is static.\n"
		"If not, then every time the value of 'y' "
		"will be the declared value 5"
		" as in the case of variable 'p'\n");

	printf("\nLoop started:\n");

	for (i = 1; i < 5; i++) {

		// Declaring the static variable 'y'
		static int y = 5;

		// Declare a non-static variable 'p'
		int p = 10;

		// Incrementing the value of y and p by 1
		y++;
		p++;

		// printing value of y at each iteration
		printf("\nThe value of 'y', "
			"declared as static, in %d "
			"iteration is %d\n",
			i, y);

		// printing value of p at each iteration
		printf("The value of non-static variable 'p', "
			"in %d iteration is %d\n",
			i, p);
	}

	printf("\nLoop ended:\n");

	printf("--------------------------------");
}

int main()
{

	printf("A program to demonstrate"
		" Storage Classes in C\n\n");

	// To demonstrate auto Storage Class
	autoStorageClass();

	// To demonstrate register Storage Class
	registerStorageClass();

	// To demonstrate extern Storage Class
	externStorageClass();

	// To demonstrate static Storage Class
	staticStorageClass();

	// exiting
	printf("\n\nStorage Classes demonstrated");

	return 0;
}

// This code is improved by RishabhPrabhu
```
