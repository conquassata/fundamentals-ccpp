El lenguaje fue concebido por Dennis Ritchie, le inventó en 1972. Su propósito era escribir un sistema operativo, el mismo que en contemporaneidad conocemos denominado como Unix.  A veces se dice que C es un ensamblador portátil; es un sistema de implementación de sistemas. Depende, además de otros lenguajes, del diseño prístino de Algol 60. Algol 60 fue un lenguaje codificado por un grupo internacional de científicos de la computación en 1960, justo al principio de la existencia de ciencias de la computación; muchos de los conceptos que a día de hoy empleamos han nacido o comenzado con Algol 60.


``` c
#include <stdio.h>
int main() {
    printf("Hello world");
    return 0;
}
```

``` c
#include <stdio.h>
```

`#include <stdio.h>` es una directiva de preprocesador que le indica al compilador que incluya el archivo de encabezado (header) `stdio.h`. Este archivo es una biblioteca que contiene las declaraciones necesarias para usar funciones de entrada-salida estándar, como `printf`.

```c
int main() {
```

La línea `int main() {` define la función principal del programa, llamada `main.` Es el punto de entrada de cualquier programa en C.

```c
printf("Hello world");
```

La línea `printf("Hello world");` es una llamada a la función `printf`, que se utiliza para imprimir texto en la consola. En este caso, se está imprimiendo la cadena "Hello world".

```c
return 0;
```

La línea `return 0;` indica que el programa ha finalizado exitosamente y devuelve el valor 0 al sistema operativo. Este valor se utiliza a menudo para indicar que el programa se ejecutó correctamente. Sin embargo, el uso de `return 0;` en `main` es opcional en lenguaje C moderno, ya que se asume un valor de retorno de 0 si no se proporciona explícitamente.

```c
}
```

El corchete de cierre `}` indica el final de la función `main`, y el final del programa en sí. Esto ha sido un ejemplo comúnmente utilizado para familiarizarse con la sintaxis básica de C.