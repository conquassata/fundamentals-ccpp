Una variable es un **elemento de datos con nombre cuyo valor puede cambiar durante el curso de la ejecución de un programa**. Se les asigna espacio en la memoria para almacenar un valor al que nos referimos como `nombre de la variable` para acceder al dato o valor almacenado. La variable pasa a comportarse como si fuese el valor o dato que ella misma contiene en referencia al contenedor donde se encuentra susodicho valor.

Para crear una variable, primero tenemos que declarar un nombre de la variable, precediéndole con el tipo de dato que estamos almacenando. La variable es creada en declaración e inicialización, dos pasos a realizar de manera respectiva, es decir, primero debemos declarar para asignar algo de espacio en la memoria por el cual se pueda almacenar el valor, e inicializar posteriormente.

```c
#include <stdio.h>
int main(){
	/* variable = Allocated space in memory to store a value.
				We refer to a variable's name to access the stored value.
				That variable now behaves as if it was the value it contains.
				BUT we need to declare what type of data we are storing.
	*/
	int x; // declaration = we are creating space in memory to store a value
	x = 123; //initialization
	int y = 321: // declaration + initialization
	return 0;
}
```

Podemos declarar varias variables a la vez en la programación C. 
```c
int id, age;
```
