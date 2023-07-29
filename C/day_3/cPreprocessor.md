# Directivas del preprocesador
Los programas de preprocesador proporcionan directivas de preprocesador que indican al compilador que preprocese el código fuente antes de compilar. Todas estas directivas de preprocesador comienzan con un símbolo '#' (hash). El símbolo '#' indica que cualquier instrucción que comience con un '#' irá al programa del preprocesador para ser ejecutada. 

## 1. Macros
En C/C++, las macros son fragmentos de código en un programa al que se le da algún nombre. Cada vez que el compilador encuentra este nombre, el compilador reemplaza el nombre con el fragmento de código real. La directiva '**#define'** se utiliza para definir una macro.

`**#define** _token_ _value_`. Donde después del preprocesamiento, el _token_ se expandirá a su _valor_ en el programa.

```c
// C Program to illustrate the macro
#include <stdio.h>

// macro definition
#define LIMIT 5

int main()
{
	for (int i = 0; i < LIMIT; i++) {
		printf("%d \n", i);
	}

	return 0;
}
```
En el programa anterior, cuando el compilador ejecuta la palabra LIMIT, la reemplaza con 5. La palabra 'LIMIT' en la definición de macro se denomina plantilla de macro y '5' es expansión de macro.

### Macros con argumentos
También podemos pasar argumentos a macros. Las macros definidas con argumentos funcionan de manera similar a las funciones.
```c
#define foo(a, b) a + b
#define func(r) r * r
```

```c
// C Program to illustrate function like macros
#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)

int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}
```

Podemos ver en el programa anterior que cada vez que el compilador encuentra AREA(l, b) en el programa, lo reemplaza con la sentencia (l*b). No solo esto, sino que los valores pasados a la plantilla de macro AREA(l, b) también se reemplazarán en la instrucción (l * b). Por lo tanto, AREA(10, 5) será igual a 10*5.

## 2. Inclusión de archivos
Este tipo de directiva de preprocesador le dice al compilador que incluya un archivo en el programa de código fuente. La **directiva de preprocesador #include** se utiliza para incluir los archivos de encabezado en el programa C/C++. 
