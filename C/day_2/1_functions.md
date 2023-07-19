Una **función en C** es un conjunto de sentencias que cuando se llaman realizan alguna tarea específica. Es el bloque de construcción básico de un programa C que proporciona modularidad o reutilización de código. Las sentencias de programación de una función están encerradas dentro de **{ } llaves**, teniendo ciertos significados y realizando ciertas operaciones. También se les llama subrutinas o procedimientos en otros idiomas.

## Declaraciones de función
En una declaración de función, debemos proporcionar el nombre de la función, su tipo de retorno y el número y tipo de sus parámetros. Una declaración de función le dice al compilador que hay una función con el nombre dado definido en otro lugar del programa.

### Sintaxis
```c
return_type **name_of_the_function** (_parameter_1_, _parameter_2_);
```
El nombre del parámetro no es obligatorio al declarar funciones. También podemos declarar la función sin usar el nombre de las variables de datos. Ejemplo:
```c
int **sum**(int _a_, int _b_);
int **sum**(int , int);
```
![image](https://github.com/ainfanthe/langNotes/assets/105471058/12f26071-7c53-4682-a194-3902424d2afa)

## Definición de funciones
La definición de la función consiste en sentencias reales que se ejecutan cuando se llama a la función (es decir, cuando el control del programa llega a la función). Una función C generalmente se define y declara en un solo paso porque la definición de la función siempre comienza con la declaración de función, por lo que no necesitamos declararla explícitamente. El ejemplo siguiente sirve como definición de función y como declaración.

```c
return_type **function_name** (para1_type _para1_name,_ para2_type _para2_name_)
{
    _// body of the function_
}
```

![image](https://github.com/ainfanthe/langNotes/assets/105471058/96ac66a4-f54a-41f0-9aa0-1b2c2c288428)

## Llamada de función
Una llamada a función es una instrucción que indica al compilador que ejecute la función. Usamos el nombre de la función y los parámetros en la llamada a la función. En el ejemplo siguiente, se llama a la primera función de suma y 10,30 se pasa a la función de suma. Después de la función, la suma de llamada de a y b se devuelve y el control también se devuelve a la función principal del programa.

![image](https://github.com/ainfanthe/langNotes/assets/105471058/faf2807d-14dc-45dc-9d7c-c137fc717a89)

## Tipos de funciones
Hay dos tipos de funciones en C:

1. **Funciones de la biblioteca**
2. **Funciones definidas por el usuario**

![image](https://github.com/ainfanthe/langNotes/assets/105471058/72e1c799-37f9-40ed-b781-809832e3ba5b)

### 1. Función de biblioteca

Una función de [biblioteca] también se conoce como **una "función incorporada".** Ya existe un paquete compilador que contiene estas funciones, cada una de las cuales tiene un significado específico y se incluye en el paquete. Las funciones integradas tienen la ventaja de ser directamente utilizables sin ser definidas, mientras que las funciones definidas por el usuario deben declararse y definirse antes de ser utilizadas.

```c
pow(), sqrt(), strcmp(), strcpy() etc.
```

Están optimizadas para un mejor rendimiento, y ahorran mucho tiempo, es decir, tiempo de desarrollo de funciones. Ej. 

```c
// C program to implement
// the above approach
#include <math.h>
#include <stdio.h>

// Driver code
int main()
{
double Number;
Number = 49;

// Computing the square root with
// the help of predefined C
// library function
double squareRoot = sqrt(Number);

printf("The Square root of %.2lf = %.2lf",
		Number, squareRoot);
return 0;
}
```

### 2. Función definida por el usuario

Las funciones que crea el programador se conocen como funciones definidas por el usuario o **"funciones a medida".** Las funciones definidas por el usuario se pueden mejorar y modificar según las necesidades del programador. Cada vez que escribimos una función que es específica de mayúsculas y minúsculas y no está definida en ningún archivo de cabecera, necesitamos declarar y definir nuestras propias funciones de acuerdo con la sintaxis.

```c
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}
```

La ejecución de un programa C comienza desde la función `main()` Cuando el compilador encuentra el control del programa salta a `functionName();`

```c
void functionName()
```
Y, el compilador comienza a ejecutar los códigos dentro de `functionName()`. El control del programa vuelve a la función una vez que se ejecuta el código dentro de la definición de la función `main()`. Ej.

```c
// C program to show
// user-defined functions
#include <stdio.h>

int sum(int a, int b)
{
return a + b;
}

// Driver code
int main()
{
int a = 30, b = 40;

// function call
int res = sum(a, b);

printf("Sum is: %d", res);
return 0;
}
```

## Pasar parámetros a funciones
Los datos pasados cuando se invoca la función se conocen como parámetros reales. En el siguiente programa, 10 y 30 se conocen como parámetros reales. Los parámetros formales son la variable y el tipo de datos mencionados en la declaración de funciones. En el siguiente programa, a y b se conocen como parámetros formales.

![image](https://github.com/ainfanthe/langNotes/assets/105471058/f11bd144-af1f-49b8-a371-06aa739e38e0)

---

```c
#include <stdio.h>
void birthday()
{
   printf("\nHappy birthday to you!");
   printf("\nHappy birthday to you!");
   printf("\nHappy birthday dear...YOU!");
   printf("\nHappy birthday to you!\n");
}
int main()
{
   birthday();
   birthday();
   birthday();
   return 0;
}
```
Se puede llamar a una función varias veces para proporcionar reutilización o modularidad. Mediante el uso de funciones, podemos evitar reescribir la misma lógica / código una y otra vez en un programa; la reutilización es el principal logro de las funciones C.
