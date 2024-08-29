#include <stdio.h>

// Función recursiva para calcular la potencia
double potencia(double base, int exponente) {
    if (exponente == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    } else if (exponente > 0) {
        return base * potencia(base, exponente - 1); // Caso recursivo: multiplicar la base por el resultado de potencia(base, exponente - 1)
    } else {
        return 1 / potencia(base, -exponente); // Caso para exponentes negativos
    }
}

int main() {
    double base;
    int exponente;

    // Solicitar al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Calcular y mostrar el resultado
    double resultado = potencia(base, exponente);
    printf("%.2lf elevado a %d es %.2lf\n", base, exponente, resultado);

    return 0;
}