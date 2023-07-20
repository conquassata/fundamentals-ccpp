# 1. Operador ternario en C
Para entender mejor el funcionamiento, podemos analizar el diagrama de flujo del operador condicional que se da a continuación.

![[Pasted image 20230719214302.png]]

C Programa para almacenar el mayor de los dos números usando el operador ternario:
```c
// C program to find largest among two
// numbers using ternary operator

#include <stdio.h>
int main()
{
	int m = 5, n = 4;

	(m > n) ? printf("m is greater than n that is %d > %d",
					m, n)
			: printf("n is greater than m that is %d > %d",
					n, m);

	return 0;
}
```

Programa C para comprobar si un año es un año bisiesto utilizando el operador ternario. Criterios:
- p: Es divisible entre 4
- q: Es divisible entre 100 (¬q entonces significa _no divisible_ entre 100)
- r: Es divisible entre 400

Entonces se utiliza la fórmula lógica ![{\displaystyle p\land \left(\lnot q\lor r\right)}](https://wikimedia.org/api/rest_v1/media/math/render/svg/1cbbff3341bee50e1c239900db3176f0f1220570) para establecer si un año dado es bisiesto: es bisiesto si es divisible entre cuatro y (no es divisible entre 100 o es divisible entre 400).
```c
// C program to check whether a year is leap year or not
// using ternary operator

#include <stdio.h>
int main()
{
	int yr = 1900;

	(yr%4==0) ? (yr%100!=0 ? printf("The year %d is a leap year",yr)
	: (yr%400==0 ? printf("The year %d is a leap year",yr)
		: printf("The year %d is not a leap year",yr)))
			: printf("The year %d is not a leap year",yr);
	return 0;
}
```

# 2. Coma como operador
En C, la coma ( , ) se puede utilizar en tres contextos:

1. **Coma como operador**
2. **Coma como separador**
3. **Operador de coma en lugar de punto y coma**

Un operador de coma en C++ es un **operador binario**. Evalúa el primer operando y descarta el resultado, evalúa el segundo operando y devuelve el valor como resultado. Tiene la prioridad más baja entre todos los operadores de C++. Es asociativo a la izquierda y actúa como un [punto de secuencia.]

```c
// 10 is assigned to i
int i = (5, 10);


// f1() is called (evaluated)
// first followed by f2().
// The returned value of f2() is assigned to j
int j = (f1(), f2());
```

```c
// C Program to Demonstrate
// comma as operator
#include <stdio.h>
int main()
{
	int x = 10;
	int y = 15;

	// using comma as an operator
	printf("%d", (x, y));
	getchar();
	return 0;
}
```

**Complejidad del tiempo:** O(1)  
**Espacio auxiliar:** O(1)

```c
// C Program to Demonstrate
// Comma as operator
#include <stdio.h>

int main()
{
	int x = 10;

	// Using Comma as operator
	int y = (x++, ++x);

	printf("%d", y);
	getchar();
	return 0;
}
```
**Complejidad del tiempo:** O(1)  
**Espacio auxiliar:** O(1)

En los ejemplos anteriores, hemos encerrado todos los operandos dentro del paréntesis. La razón de esto es la precedencia del operador de asignación sobre la coma, como se explica a continuación.

## 2. Coma como separador
Una coma como separador se utiliza para separar varias variables en una declaración de variables y varios argumentos en una llamada a función. Es el uso más común del operador de coma en C.
```c
// comma as a separator
int a = 1, b = 2;
void fun(x, y);
```
El uso de una coma como separador no debe confundirse con el uso de un operador. Por ejemplo, en la siguiente declaración, se puede llamar a f1() y f2() en cualquier orden.
```c
// Comma acts as a separator here
// and doesn't enforce any sequence.
// Therefore, either f1() or f2()
// can be called first

void fun(f1(), f2());
```

```c
// C Program to Demonstrate
// comma as separator and
// as operator
#include <stdio.h>

int main()
{
	// Comma separating x=10 and y
	int x = 10, y;

	// Comma acting as operator
	// y= (x+2) and x=(x+3)
	y = (x++, printf("x = %d\n", x), ++x,
		printf("x = %d\n", x), x++);

	// Note that last expression is evaluated
	// but side effect is not updated to y
	printf("y = %d\n", y);
	printf("x = %d\n", x);

	return 0;
}
```

## 3. Operador de coma en lugar de punto y coma

Sabemos que en C, cada instrucción termina con un punto y coma, pero el operador de coma también se usa para terminar la instrucción después de satisfacer las siguientes reglas.

- Las instrucciones de declaración de variable deben terminar con un punto y coma.
- El operador de coma puede terminar las instrucciones después de la instrucción de declaración.
- La última instrucción del programa debe terminarse con un punto y coma.

```c
// C Program to illustrate
// the use of comma operator
// in the place of semicolon

#include <stdio.h>

int main(void)
{
	printf("First Line\n"),
	printf("Second Line\n"),
	printf("Third Line\n"),
	printf("Last line");
	return (0);
}
```

## Coma como separador vs coma como operador
Hay una ligera diferencia entre una coma como separador y una coma como operador. Observemos usando un ejemplo:
```c
// Wrong Method
// Comma acts as separator during initialization
// Will generate error
int a = 4, 3;    

// Correct Method
// Comma acts as operator
int a;        
a = 4,3;
```

Ahora el valor almacenado en a será 3. Además, lo siguiente es válido,
```c
int a =(4, 3);     // value of a is 3
```