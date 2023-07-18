/*
Write a program that prints the sine function for an input x between (0, 1)
*/

#include <stdio.h>
#include <math.h> //biblioteca necesaria para la lectura de la función sin()
int main() {
    double x, result; //declaramos las variables a utilizar
    printf("Numero (0,1): "); //entrada de dato
    scanf("%lf", &x); //asignamos o inicializamos x con el dato de entrada previo
    if (x <= 1 && x >= 0) //condicion a cumplir para la evaluación del seno
    { 
        result = sin(x);   // Calcula el seno
        printf("El seno de %.2f es %.6f\n", x, result); //Imprime seno
    }
    else {
        printf("El numero digitado no es correcto (0,1)"); //imprime en caso de que no sea correcto el numero digitado
    }
    return 0;
}
