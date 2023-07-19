Los operadores lógicos en C se utilizan para combinar múltiples condiciones/restricciones. Operadores lógicos devuelve 0 o 1, depende del resultado de la expresión true o false. En la programación C para la toma de decisiones, utilizamos operadores lógicos. Tenemos 3 operadores lógicos principales en el lenguaje C:

- **Lógico Y (&&)**
- **Lógico O (||)**
- **Lógico NO (!)**
- **XOR lógico(^)**

## Tipos de operadores lógicos
### 1. Operador lógico AND

Si ambos operandos son distintos de cero, entonces la condición se convierte en verdadera. De lo contrario, el resultado tiene un valor de 0. El tipo de retorno del resultado es int. A continuación se muestra la tabla de verdad para el operador lógico AND.

| X   | Y   | X&&Y |
| --- | --- | ---- |
| 1   | 1   | 1    |
| 1   | 0   | 0    |
| 0   | 1   | 0    |
| 0   | 0   | 0    |
|     |     |      |

**Syntax:**
```c
(condition_1 && condition_2)
```

```c
// C program for Logical
// AND Operator
#include <stdio.h>

// Driver code
int main()
{
int a = 10, b = 20;

if (a > 0 && b > 0)
{
	printf("Both values are greater than 0\n");
}
else
{
	printf("Both values are less than 0\n");
}
return 0;
}
```
### 2. Operador OR lógico
La condición se convierte en verdadera si cualquiera de ellos es distinto de cero. De lo contrario, devuelve false, es decir, 0 como valor. A continuación se muestra la tabla de verdad para el operador OR lógico.

|X|Y|X\|Y|
|---|---|---|
|1|1|1|
|1|0|1|
|0|1|1|
|0|0|0|

**Sintaxis:**
```c
(condition_1 || condition_2)
```

```c
// C program for Logical
// OR Operator
#include <stdio.h>

// Driver code
int main()
{
int a = -1, b = 20;

if (a > 0 || b > 0)
{
	printf("Any one of the given value is "
		"greater than 0\n");
}
else
{
	printf("Both values are less than 0\n");
}
return 0;
}
```
### Operador lógico NOT
Si la condición es verdadera, entonces el operador lógico NOT la hará falsa y viceversa. A continuación se muestra la tabla de verdad para el operador lógico NOT.

|X|! X|
|---|---|
|0|1|
|1|0|

**Sintaxis:**
```c
!(condition_1 && condition_2)
```

```c
// C program for Logical
// NOT Operator
#include <stdio.h>

// Driver code
int main()
{
int a = 10, b = 20;

if (!(a > 0 and b > 0))
{
	// condition returned true but
	// logical NOT operator changed
	// it to false
	printf("Both values are greater than 0\n");
}
else
{
	printf("Both values are less than 0\n");
}
return 0;
}
```
### XOR (^) Operador lógico:
Si ambos bits son iguales, devolverá false de lo contrario true. A continuación se muestra la tabla de verdad para el operador XOR lógico.

|   |   |   |
|---|---|---|
|**X**|**Y**|**X^Y**|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

**Sintaxis:**
```c
((condition1) ^ (condition2))
```

```c
// C program for Logical
// XOR Operator
#include <stdio.h>

// Driver code
int main()
{
int a = 11, b = 11;
printf("%d\n",a^b);
return 0;
}
```
## Práctica

```c
// C program to demonstrate
// Logical Operators
#include <stdio.h>

// Driver code
int main()
{
int x = 7, y = 3;

// Logical operators
printf("Following are the logical operators in C \n");
printf("The value of this logical and operator ((x==y) "
		"&& (x<y)) is: %d \n",
		((x == y) && (x < y)));

printf("The value of this logical or operator ((x==y) "
		"|| (x<y)) is: %d \n",
		((x == y) || (x < y)));

printf("The value of this logical not operator "
		"(!(x==y)) is: %d ",
		(!(x == y)));
return 0;
}
```
# Evaluación de cortocircuito en C
El cortocircuito es uno de los pasos de optimización del compilador, en este paso se evita el cálculo innecesario durante la evaluación de una expresión. La expresión se evalúa de izquierda a derecha. Funciona en ciertos casos en los que el valor de la expresión se puede calcular ciertamente evaluando solo partes de la expresión.

**Evaluación de cortocircuito:** el [compilador] omite la ejecución o evaluación de algunas subexpresiones en una expresión lógica. El compilador deja de evaluar las subexpresiones adicionales tan pronto como se determina el valor de la expresión. A continuación se muestra un ejemplo de lo mismo:

```c
if (a == b || c == d || e == f) {
	// do_something
}
```
Si la expresión **a** == b es **verdadera**, entonces c == d y **e == f** no se evalúan porque el resultado de la expresión ya ha sido determinado. Del mismo modo, si se usamos el [**operador lógico AND (&&**] en lugar de **OR lógico (||)**, y la expresión **a == b** es **false**, el compilador omitirá evaluar otras subexpresiones.

---
```c
#include <stdio.h>
int main(){
	int outside, weather;
	printf("\nIf outside 1 true 0 false:");
	scanf("%d", &outside);
	printf("\nIf rain 1 true 0 false:");
	scanf("%d", &weather);
	if (outside && weather) {
	printf("\nUse an umbrella");
	}
	else {
	printf("\nDress normally");
	}
	return 0;
}
```
