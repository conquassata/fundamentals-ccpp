Un comentario se define como una **construcción del lenguaje de programación**​ destinada a incrustar anotaciones legibles. En C los comentarios son realizados de la siguiente manera, empleando doble barra inclinada `\\`, de manera tal que:

```c
//Esto es un comentario en C, los fragmentos de código comentados serán ignorados por el compilador, es decir, no serán considerados parte del código en su ejecución

/*Un comentario multilinea es realizado empleando una barra inclinada con un asterisco, y cerrado de manera similar, lo que se contenga será de igual manera ignorado en lectura del código por parte de la maquina*/
```

La utilidad de los comentarios radica en la facilidad que ofrece para legibilidad del código, es decir, fines didácticos para explicación del mismo.

Una **secuencia de escape** es una combinación de caracteres que tiene un significado distinto de los [caracteres] literales contenidos en ella.

```c
#include <stdio.h>
int main(){
/*escape squence = character combination consisting of a blackslash \
                    followed by a letter or combination of digits.
                    They specify actions within a line or string of text
                    \n = newline
                    \t = newtab*/
    printf("1\t2\t3\t4\t5");
    return 0;
}
```
