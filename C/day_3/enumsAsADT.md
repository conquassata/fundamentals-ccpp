La enumeración es un tipo de datos definido por el usuario en C. Se utiliza principalmente para asignar nombres a constantes integrales, esto mejora de factible manera la legibilidad e idiomatica del lenguaje.

```c
// The name of enumeration is "flag" and the constant
// are the values of the flag. By default, the values
// of the constants are as follows:
// constant1 = 0, constant2 = 1, constant3 = 2 and 
// so on.
enum flag{constant1, constant2, constant3, ....... };
```

También se pueden definir variables de tipo enumeración. Se pueden definir de dos maneras:

```c
// In both of the below cases, "day" is 
// defined as the variable of type week. 

enum week{Mon, Tue, Wed};
enum week day;

// Or

enum week{Mon, Tue, Wed}day;
```

```c
// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
	enum week day;
	day = Wed;
	printf("%d",day);
	return 0;
}
```
En el ejemplo anterior, declaramos "día" como la variable y el valor de "Wed" se asigna al día, que es 2. Entonces, como resultado, se imprime 2.

```c
// Another example program to demonstrate working
// of enum in C
#include<stdio.h>

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
		Aug, Sep, Oct, Nov, Dec};

int main()
{
int i;
for (i=Jan; i<=Dec; i++)	
	printf("%d ", i);
	
return 0;
}
```
En este ejemplo, el bucle for se ejecutará de i = 0 a i = 11, ya que inicialmente el valor de i es Jan, que es 0 y el valor de Dec es 11.

# Datos interesantes sobre la inicialización de la enumeración.
1. Dos nombres de enumeración pueden tener el mismo valor. Por ejemplo, en el siguiente programa de C, tanto 'Failed' como 'Freezed' tienen el mismo valor 0.
```c
#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
printf("%d, %d, %d", Working, Failed, Freezed);
return 0;
}
```
Si no asignamos explícitamente valores a los nombres de enumeración, el compilador asigna valores por defecto a partir de 0, así sucesivamente.
```c
#include <stdio.h>
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{
	enum day d = thursday;
	printf("The day number stored in d is %d", d);
	return 0;
}
```
