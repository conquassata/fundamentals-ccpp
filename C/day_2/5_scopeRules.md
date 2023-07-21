El alcance o scope de una variable en C es el bloque o la región en el programa donde se declara, define y utiliza una variable. Fuera de esta región, no podemos acceder a la variable y se trata como un identificador no declarado.

```c
// C program to illustrate the scope of a variable
#include <stdio.h>

int main()
{
	// Scope of this variable is within main() function
	// only.
	int var = 34;

	printf("%d", var);
	return 0;
}

// function where we try to access the var defined in main()
void func() { printf("%d", var); }
```
Aquí, intentamos acceder a los nombres de variables var Como podemos ver que si intentamos referirnos a la variable fuera de su alcance, obtenemos error. 

# Tipos de reglas de ámbito en C
Las normas sobre el ámbito de aplicación C pueden incluirse en las dos categorías siguientes:

- Alcance global
- Ámbito local

## Analicemos cada regla de ámbito con ejemplos.
### 1. Alcance global en C
El alcance global se refiere a la región fuera de cualquier bloque o función.

- Las variables declaradas en el ámbito global se denominan variables globales.
- Las variables globales son visibles en cada parte del programa.

```c
// C program to illustrate the global scope
#include <stdio.h>

// variable declared in global scope
int global = 5;

// global variable accessed from
// within a function
void display()
{
	printf("%d\n", global);
}

// main function
int main()
{
	printf("Before change within main: ");
	display();

	// changing value of global
	// variable from main function
	printf("After change within main: ");
	global = 10;
	display();
}
```
### 2. Ámbito de aplicación local en C
El ámbito local se refiere a la región dentro de un bloque o una función. Es el espacio encerrado entre los aparatos ortopédicos { }.

- Las variables declaradas dentro del ámbito local se denominan variables locales.
- Las variables locales son visibles en el bloque en el que se declaran y otros bloques anidados dentro de ese bloque.
- El ámbito local también se denomina ámbito de bloque.
- Las variables locales tienen vinculación interna.

```c
// C program to illustrate the local scope
#include <stdio.h>

// Driver Code
int main()
{
	{
		int x = 10, y = 20;
		{
			// The outer block contains
			// declaration of x and
			// y, so following statement
			// is valid and prints
			// 10 and 20
			printf("x = %d, y = %d\n", x, y);
			{
				// y is declared again,
				// so outer block y is
				// not accessible in this block
				int y = 40;

				// Changes the outer block
				// variable x to 11
				x++;

				// Changes this block's
				// variable y to 41
				y++;

				printf("x = %d, y = %d\n", x, y);
			}

			// This statement accesses
			// only outer block's
			// variables
			printf("x = %d, y = %d\n", x, y);
		}
	}
	return 0;
}
```
