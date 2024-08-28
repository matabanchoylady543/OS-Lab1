#include <stdio.h>

// Definimos la estructura para almacenar las calificaciones
typedef struct {
    float parcial1;
    float parcial2;
    float tareas_quices;
    float proyecto;
    float calificacion_final;
} Calificaciones;

// Función para calcular la calificación final
void calcular_calificacion_final(Calificaciones *cal) {
    float suma = (cal->parcial1 * 0.30) +
                 (cal->parcial2 * 0.25) +
                 (cal->tareas_quices * 0.25) +
                 (cal->proyecto * 0.20);
    cal->calificacion_final = suma;
}

// Función para determinar si aprueba la materia
int aprueba_materia(float calificacion_final) {
    return calificacion_final >= 3.0;
}

int main() {
    Calificaciones estudiante;

    // Entrada de datos
    printf("Ingrese las calificaciones:\n");
    printf("Parcial 1: ");
    scanf("%f", &estudiante.parcial1);
    printf("Parcial 2: ");
    scanf("%f", &estudiante.parcial2);
    printf("Tareas y Quices: ");
    scanf("%f", &estudiante.tareas_quices);
    printf("Proyecto: ");
    scanf("%f", &estudiante.proyecto);

    // Calculamos la calificación final
    calcular_calificacion_final(&estudiante);

    // Mostramos la calificación final y si aprueba o no
    printf("\nCalificacion final: %.2f\n", estudiante.calificacion_final);
    if (aprueba_materia(estudiante.calificacion_final)) {
        printf("El estudiante aprueba la materia\n");
    } else {
        printf("El estudiante no aprueba la materia\n");
    }

    return 0;
}
