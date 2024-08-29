#include <stdio.h>

// Función para calcular el factorial de forma iterativa
unsigned long long factorial_iterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función para calcular el factorial de forma recursiva
unsigned long long factorial_recursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursivo(n - 1);
    }
}

int main() {
    int numero;
    int opcion;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    // Verificar que el número no sea negativo
    if (numero < 0) {
        printf("El factorial no está definido para numeros negativos.\n");
        return 1; // Salir del programa con un código de error
    }

    // Solicitar al usuario que elija el método
    printf("Seleccione el metodo para calcular el factorial:\n");
    printf("1. Iterativo\n");
    printf("2. Recursivo\n");
    printf("Ingrese 1 o 2: ");
    scanf("%d", &opcion);

    // Calcular y mostrar el factorial según la opción seleccionada
    if (opcion == 1) {
        printf("El factorial de %d es %llu (metodo iterativo).\n", numero, factorial_iterativo(numero));
    } else if (opcion == 2) {
        printf("El factorial de %d es %llu (metodo recursivo).\n", numero, factorial_recursivo(numero));
    } else {
        printf("Opcion no valida.\n");
        return 1; // Salir del programa con un código de error
    }

    return 0;
}