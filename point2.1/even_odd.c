#include <stdio.h>

// Función para verificar si un número es par o impar
void verificarParImpar(int numero) {
    if (numero % 2 == 0) {
        printf("El numero %d es par\n", numero);
    } else {
        printf("El nUmero %d es impar\n", numero);
    }
}

int main() {
    int numero;
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    verificarParImpar(numero);

    return 0;
}