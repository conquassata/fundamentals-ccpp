La instrucción C return finaliza la ejecución de una función y devuelve el control a la función desde donde se llamó. La instrucción return puede o no devolver un valor dependiendo del tipo de retorno de la función. Por ejemplo, int devuelve un valor entero, void no devuelve nada, etc. En C, solo podemos devolver un único valor de la función usando la sentencia return y tenemos que declarar el data_type del valor devuelto en la definición/declaración de la función.

```c
return return_value;
```

![image](https://github.com/ainfanthe/langNotes/assets/105471058/55769803-cdc9-4a05-b168-fc105c00c407)

Hay varias maneras de usar las declaraciones de devolución. A continuación se mencionan algunos:

## 1. Métodos que no devuelven un valor
En C, no se puede omitir la instrucción return cuando el tipo de retorno de la función es de tipo no void. La instrucción return sólo se puede omitir para los tipos void.

### A. No utilizar una instrucción return en la función void return type: 
Al usar la función void, no es necesario usar return ya que el vacío en sí no significa nada (un valor vacío).

```c
void func()
{
    .
    .
    .
}
````

```c
// C code to show not using return
// statement in void return type function

#include <stdio.h>

// void method without return statement
void Print()
{
	printf("Welcome to GeeksforGeeks");
}

// Driver method
int main()
{

	// Calling print
	Print();

	return 0;
}
```

### B. Uso de la instrucción return en la función void return type
Como void significa vacío, no necesitamos devolver nada, pero podemos usar la instrucción return dentro de las funciones void como se muestra a continuación. Aunque, todavía no podemos devolver ningún valor.

```c
void func()
{
    return;
}
```

```c
// C code to show using return
// statement in void return type function

#include <stdio.h>

// void method with return statement
void Print()
{
	printf("Welcome to GeeksforGeeks");

	// void method using the return statement
	return;
}

// Driver method
int main()
{

	// Calling print
	Print();
	return 0;
}
```

## 2. Métodos que devuelven un valor
Para las funciones que definen un tipo de retorno no nulo en la definición y la declaración, la instrucción return debe ir seguida inmediatamente del valor devuelto de ese tipo de retorno especificado.

 Sintaxis:

```c
return-type func()
{
    return value;
}
```

```c
// C code to illustrate Methods returning
// a value using return statement

#include <stdio.h>

// non-void return type
// function to calculate sum
int SUM(int a, int b)
{
	int s1 = a + b;

	// method using the return
	// statement to return a value
	return s1;
}

// Driver method
int main()
{
	int num1 = 10;
	int num2 = 10;
	int sum_of = SUM(num1, num2);
	printf("The sum is %d", sum_of);
	return 0;
}
```
