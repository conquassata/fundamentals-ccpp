#include <stdio.h>
#include <math.h>
table() {
    printf("sine and cosine\nbetween 0 and 1\n");
    printf("---------------\n");
    printf("sine\tcosine\n");
    printf("---------------\n");
    double i;
    for (i = 0.0; i <= 1.0; i+=0.1) // for loop to calculate the sin() and cos() for every iteration
    {
        double sine = sin(i); // calc sin()
        double cosine = cos(i); // calc cos()
        printf("%.4f\t%.4f\n", sine, cosine);
    }
}

int main() {
    table();
    return 0;
}