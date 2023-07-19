Continuación con la comprensión de expresiones correctas que cambian el flujo de control. Continuamos empleando la lógica if-else, pero vamos cambiando el tipo de expresión que probamos.

```c
#include <stdio.h>
int main(){
	int outside, weather;
	printf("\nIf outside 1 true 0 false:");
	scanf("%d", &outside);
	printf("\nIf rain 1 true 0 false:");
	scanf("%d", &weather);
	if (outside && weather) {
	printf("\nUse an umbrella");
	}
	else {
	printf("\nDress normally");
	}
	return 0;
}
```
En una expresión en la que probamos un efecto verdadero-false, lo que realmente probamos es cero y distinto de cero: 1 representa verdadero, 0 representa falso.

