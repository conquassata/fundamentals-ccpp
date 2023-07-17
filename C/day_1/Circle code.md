
```c
#include <stdio.h>
#define PI 3.14159
int main(){
	double area = 0.0, radius = 0.0;
	printf("Please, enter radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
	return 0;
}
```

```c
#include <stdio.h>
```
`#include <stdio.h>`: comando de preproceso, trae tanto printf como también de igual manera a scanf.  `Scanf` es una rutina básica para realizar la entrada de datos.

```c
#define PI 3.14159 
```
`#define`: la directiva `define` hace una cosa interesante, definir PI a seis cifras significativas porque eso es lo que conseguimos almacenar en un double normal. 

```c
int main(){
```
`Int main() {`: Introducimos un programa nuevamente, lo cual es main. Comenzamos con la llave abierta para una declaración compuesta.

```c
double area = 0.0, radius = 0.0;
```
Esta primera sentencia es una declaración en la que definimos tanto área como radio: dos identificadores. Los identificadores pueden ser palabras ordinarias, exceptuando las reservadas, como double. Inicializamos ambos en 0, usamos 0.0 porque es un claro indicador de que estamos efectuando constantes que son doubles.

```c
printf("Please, enter radius: ");
```
Esto a lo que llamamos prompt. Printf imprime el texto en la pantalla.

```c
scanf("%lf", &radius);
```
Introducido el radio como un double long float.

```c
area = PI * radius * radius;
```
El cálculo u operación para obtención del área: `pi * r^2`, no tenemos forma simple para denominar al cuadrado, no hay otra notación alguna. Usamos multiplicación repetida.

```c
printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
```
Finalmente imprimimos nuestra respuesta.

```c
return 0;
```
retornamos 0 para dar por concluido el programa.

---
```
Please, enter radius: 2
radius of 2.000000 meters; area is 12.566360 sq. meters
```