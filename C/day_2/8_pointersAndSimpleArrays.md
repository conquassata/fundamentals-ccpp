Los punteros son uno de los componentes principales del lenguaje de programación C. Un puntero se puede utilizar para almacenar la dirección de memoria de otras variables, funciones o incluso otros punteros. El uso de punteros permite el acceso a memoria de bajo nivel, la asignación dinámica de memoria y muchas otras funcionalidades en C.

## ¿Qué es un puntero en C?

> Un puntero se define como un tipo de datos derivado que puede almacenar la dirección de otras variables C o una ubicación de memoria. Podemos acceder y manipular los datos almacenados en esa ubicación de memoria utilizando punteros.

Como los punteros almacenan las direcciones de memoria, su tamaño es independiente del tipo de datos a los que apuntan. Este tamaño de punteros solo depende de la arquitectura del sistema.

## ****Sintaxis****
La sintaxis de los punteros es similar a la declaración de variables en C, pero usamos el ****operador de desreferenciación ( * )**** en la declaración de puntero.

```c
datatype * ptr;
```

Dónde
- ****PTR**** es el nombre del puntero.
- ****DataType**** es el tipo de datos al que apunta.

La sintaxis anterior se utiliza para definir un puntero a una variable. También podemos definir punteros a funciones, estructuras, etc.

## ¿Cómo usar los punteros?
El uso de punteros se puede dividir en tres pasos:

1. ****Declaración de puntero****
2. ****Inicialización del puntero****
3. ****Desreferenciación****

### 1. Declaración de puntero
En la declaración de puntero, solo declaramos el puntero pero no lo inicializamos. Para declarar un puntero, usamos el ****operador ( * ) dereference**** antes de su nombre.

```c
int *ptr;
```

El puntero declarado aquí apuntará a alguna dirección de memoria aleatoria, ya que no está inicializada. Tales punteros se llaman punteros comodín.

### 2. Inicialización del puntero
La inicialización del puntero es el proceso en el que asignamos algún valor inicial a la variable del puntero. Generalmente usamos el ****operador ( & ) addressof**** para obtener la dirección de memoria de una variable y luego almacenarla en la variable de puntero.

```c
int var = 10;
int * ptr;
ptr = &var;
```

También podemos declarar e inicializar el puntero en un solo paso. Este método se denomina definición de puntero, ya que el puntero se declara e inicializa al mismo tiempo.

```c
int *ptr = &var;
```

### 3. Desreferenciación
La desreferencia de un puntero es el proceso de acceso al valor almacenado en la dirección de memoria especificada en el puntero. Usamos el mismo ****operador de desreferenciación ( * )**** que usamos en la declaración de puntero.

![image](https://github.com/ainfanthe/langLearningNotes/assets/105471058/23d40fce-db14-43a6-9610-bc6e1e4fc74c)

```c
// C program to illustrate Pointers
#include <stdio.h>

void geeks()
{
	int var = 10;

	// declare pointer variable
	int* ptr;

	// note that data type of ptr and var must be same
	ptr = &var;

	// assign the address of a variable to a pointer
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

// Driver program
int main()
{
	geeks();
	return 0;
}
```

## Tipos de punteros
Los punteros se pueden clasificar en muchos tipos diferentes según el parámetro en el que definimos sus tipos. Si consideramos el tipo de variable almacenada en la ubicación de memoria señalada por el puntero, entonces los punteros se pueden clasificar en los siguientes tipos:

### 1. Punteros enteros
Como su nombre indica, estos son los punteros que apuntan a los valores enteros.

```c
int *ptr;
```

Estos punteros se pronuncian como Puntero a entero. Del mismo modo, un puntero puede apuntar a cualquier tipo de datos primitivo. También puede apuntar a tipos de datos derivados, como arrays, y tipos de datos definidos por el usuario, como estructuras.

### 2. Puntero de Array
Los punteros y el array están estrechamente relacionados entre sí. Incluso el nombre del array es el puntero a su primer elemento. También se conocen como [puntero a arrays]. Podemos crear un puntero a un array usando la sintaxis dada.

```c
char *ptr = &array_name;
```

Pointer to Arrays exhibe algunas propiedades interesantes que discutimos más adelante.

### 3. Puntero de estructura
El puntero que apunta al tipo de estructura se [denomina puntero]de estructura o puntero a estructura. Se puede declarar de la misma manera que declaramos los otros tipos de datos primitivos.

```c
struct struct_name *ptr;
```

En C, los punteros de estructura se utilizan en estructuras de datos como listas vinculadas, árboles, etc.

### 4. Punteros de función
Los punteros de función apuntan a las funciones. Son diferentes del resto de los punteros en el sentido de que en lugar de apuntar a los datos, apuntan al código. Consideremos un prototipo de función – int ****func (int, char),**** el [puntero] de función para esta función será:

```c
int (*ptr)(int, char);
```
> Nota: La sintaxis de los punteros de función cambia según el prototipo de función.

## Tamaño de los punteros en C
El tamaño de los punteros en C es igual para cada tipo de puntero. El tamaño del puntero no depende del tipo al que apunta. Solo depende del sistema operativo y la arquitectura de la CPU. El tamaño de los punteros en C es

- ****8 bytes**** para un ****sistema de 64 bits****
- ****4 bytes**** para un ****sistema de 32 bits****

La razón del mismo tamaño es que los punteros almacenan las direcciones de memoria, sin importar de qué tipo sean. Como el espacio necesario para almacenar las direcciones de las diferentes ubicaciones de memoria es el mismo, la memoria requerida por un tipo de puntero será igual a la memoria requerida por otros tipos de puntero.

### ¿Cómo encontrar el tamaño de los punteros en C?
Podemos encontrar el tamaño de los punteros usando el [****operador****] sizeof como se muestra en el siguiente programa: ****Ejemplo: Programa C para encontrar el tamaño de diferentes tipos de punteros.****

```c
// C Program to find the size of different pointers types
#include <stdio.h>

// dummy structure
struct str {
};

// dummy function
void func(int a, int b){};

int main()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct str x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct str* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_vn = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%d bytes\n",
		sizeof(ptr_int));
	printf("Size of Character Pointer\t:\t%d bytes\n",
		sizeof(ptr_char));
	printf("Size of Structure Pointer\t:\t%d bytes\n",
		sizeof(ptr_str));
	printf("Size of Function Pointer\t:\t%d bytes\n",
		sizeof(ptr_func));
	printf("Size of NULL Void Pointer\t:\t%d bytes",
		sizeof(ptr_vn));

	return 0;
}
```
Como podemos ver, no importa cuál sea el tipo de puntero, el tamaño de todos y cada uno de los punteros es el mismo. Ahora, uno puede preguntarse que si el tamaño de todos los punteros es el mismo, entonces ¿por qué necesitamos declarar el tipo de puntero en la declaración? ****La declaración de tipo es necesaria en el puntero para fines de desreferenciación y aritmética de punteros.****

## ****Aritmética de punteros****
La aritmética de puntero se refiere a las operaciones [aritméticas] legales o válidas que se pueden realizar en un puntero. Es ligeramente diferente de los que generalmente usamos para cálculos matemáticos, ya que solo se puede realizar un conjunto limitado de operaciones en punteros. Estas operaciones incluyen:

- Incremento en un puntero
- Decremento en un puntero
- Adición de entero a un puntero
- Restar de entero a un puntero
- Restar dos punteros del mismo tipo
- Comparación de punteros del mismo tipo.
- Asignación de punteros del mismo tipo.

```c
// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
	return 0;
}
```

## C Punteros y arrays
En el lenguaje de programación C, los punteros y las matrices están estrechamente relacionados. Un nombre de matriz actúa como una constante de puntero. El valor de esta constante de puntero es la dirección del primer elemento. Por ejemplo, si tenemos una matriz llamada val, entonces val y ****&val[0]**** se pueden usar indistintamente. Si asignamos este valor a un puntero no constante del mismo tipo, entonces podemos acceder a los elementos de la matriz usando este puntero.

### Ejemplo 1: Acceso a elementos del array mediante puntero con subíndice de array.

![image](https://github.com/ainfanthe/langLearningNotes/assets/105471058/c5d77b60-7492-4db1-9eb5-210f3e7fa491)

```c
// C Program to access array elements using pointer
#include <stdio.h>

void geeks()
{
	// Declare an array
	int val[3] = { 5, 10, 15 };

	// Declare pointer variable
	int* ptr;

	// Assign address of val[0] to ptr.
	// We can use ptr=&val[0];(both are same)
	ptr = val;

	printf("Elements of the array are: ");

	printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

	return;
}

// Driver program
int main()
{
	geeks();
	return 0;
}
```
No solo eso, ya que los elementos de matriz se almacenan continuamente, podemos puntear operaciones aritméticas como incremento, decremento, suma y resta de enteros en el puntero para moverse entre los elementos de matriz.

### Ejemplo 2: Acceso a elementos de matriz mediante aritmética de puntero

![image](https://github.com/ainfanthe/langLearningNotes/assets/105471058/c6c63d36-827b-4c63-b88e-d4662095dee9)

```c
// C Program to access array elements using pointers
#include <stdio.h>

int main()
{

	// defining array
	int arr[5] = { 1, 2, 3, 4, 5 };

	// defining the pointer to array
	int* ptr_arr = &arr;

	// traversing array using pointer arithmetic
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr_arr++);
	}
	return 0;
}
```

Este concepto no se limita al array unidimensional, también podemos referirnos a un elemento de array multidimensional utilizando punteros.


