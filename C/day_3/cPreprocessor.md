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


