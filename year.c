#include <stdio.h>

//Function to check if a year is a leap year
int esBisiesto(int anho) {
    // Un año es bisiesto si es divisible por 4
    // pero no es divisible por 100, excepto cuando es divisible por 400
    if ((anho % 4 == 0 && anho % 100 != 0) || (anho % 400 == 0)) {
        return 1; // Es un anho bisiesto
    } else {
        return 0; // No es un anho bisiesto
    }
}

int main() {
    int anho;

    // Solicita al usuario que ingrese un anho
    printf("Ingrese un anho para verificar si es bisiesto: ");
    scanf("%d", &anho);

    // Verificar si el anho es bisiesto
    if (esBisiesto(anho)) {
        printf("%d es un anho bisiesto.\n", anho);
    } else {
        printf("%d no es un anho bisiesto.\n", anho);
    }

    return 0;
}