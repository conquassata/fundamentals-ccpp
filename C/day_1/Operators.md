Los operadores son símbolos que indican cómo se deben manipular los operandos. Los operadores junto con los operandos forman una expresión, que es una fórmula que define el cálculo de un valor. Los operandos pueden ser constantes, variables o llamadas a funciones, siempre que éstas devuelvan algún valor. El compilador evalúa los operadores, algunos de izquierda a derecha, otros de derecha a izquierda, siguiendo un orden de precedencia. Este orden se puede alterar utilizando paréntesis para forzar al compilador a evaluar primero las partes que se deseen.
[Operadores. (ugr.es)](https://ccia.ugr.es/~jfv/ed1/c/cdrom/cap2/cap26.htm)
```c
#include <stdio.h>
int main(){
	// arithmetic operators
	// + (addition)
	// - (subtraction)
	// * (multiplication)
	// / (division)
	// % (modulus)
	// ++ increment
	// -- decrement
	
	int x = 5;
	int y = 2;
	
	// int z = x + y;
	// int z = x - y;
	// int z = x * y;
	// float z = x / (float) y;
	// int z = x % y;
	// x++;
	// y--;
	
	printf("%d", x);
	printf("%d", y);
	return 0;
}
```
![[Pasted image 20230717043422.png]]