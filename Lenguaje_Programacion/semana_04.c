#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

// Estructura para un estudiante
typedef struct {
    char nombre[50];
    int grado;   // 2 para segundo año, 3 para tercer año
    float nota;  // Nota del estudiante
} Estudiante;

// Función para agregar un estudiante
void agregarEstudiante(Estudiante estudiantes[], int *cantidad) {
    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]", estudiantes[*cantidad].nombre);

}

// Función para mostrar los estudiantes
void mostrarEstudiantes(Estudiante estudiantes[], int cantidad) {
    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("--- Lista de Estudiantes ---\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Nombre: %s | Grado: %d | Nota: %.2f\n", estudiantes[i].nombre, estudiantes[i].grado, estudiantes[i].nota);
    }
}

// Función para actualizar la nota de un estudiante
void actualizarNota(Estudiante estudiantes[], int cantidad) {
    char nombre[50];
    int encontrado = 0;

    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]", nombre);

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(estudiantes[i].nombre, nombre) == 0) {
            printf("Nota actual: %.2f\n", estudiantes[i].nota);
            printf("Ingrese la nueva nota: ");
            scanf("%f", &estudiantes[i].nota);
            printf("Nota actualizada.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Estudiante no encontrado.\n");
    }
}

// Función principal
int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int cantidad = 0, opcion;

    do {
        printf("\n1. Agregar estudiante\n2. Mostrar estudiantes\n3. Actualizar nota\n4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: agregarEstudiante(estudiantes, &cantidad); break;
            case 2: mostrarEstudiantes(estudiantes, cantidad); break;
            case 3: actualizarNota(estudiantes, cantidad); break;
            case 4: printf("Saliendo...\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while (opcion != 4);

    return 0;
}
