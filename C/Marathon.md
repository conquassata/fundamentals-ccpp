 ```c
#include <stdio.h>
int main(void){
	int miles = 26, yards = 385;
	double kilometers;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometers. \n\n", kilometers);
	return 0;
}
```

`int main(void){`: en esta situación, `Void` es una palabra reservada o clave que significa sin argumentos. `Void` si es empleado como tipo de dato significa que el tipo de dato se encuentra indefinido o que la lista de argumentos se encuentra, como anteriormente se menciona, vacía.

---
```
A marathon is 42.185969 kilometers. 
```

