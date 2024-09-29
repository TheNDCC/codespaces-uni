#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

// Estructura para almacenar la información de un estudiante
typedef struct {
    char nombre[50];
    int grado; // 2 para segundo año, 3 para tercer año
    float nota; // Nota del estudiante
} Estudiante;

// Prototipos de funciones
void agregarEstudiante(Estudiante estudiantes[], int *cantidad);
void mostrarEstudiantes(Estudiante estudiantes[], int cantidad);
void actualizarNota(Estudiante estudiantes[], int cantidad);
void menu();

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int cantidad = 0; // Cantidad de estudiantes registrados
    int opcion;

    do {
        menu();
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarEstudiante(estudiantes, &cantidad);
                break;
            case 2:
                mostrarEstudiantes(estudiantes, cantidad);
                break;
            case 3:
                actualizarNota(estudiantes, cantidad);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}

// Función para mostrar el menú
void menu() {
    printf("\n--- Menú de Gestión de Notas ---\n");
    printf("1. Agregar estudiante\n");
    printf("2. Mostrar estudiantes\n");
    printf("3. Actualizar nota de un estudiante\n");
    printf("4. Salir\n");
}

// Función para agregar un nuevo estudiante
void agregarEstudiante(Estudiante estudiantes[], int *cantidad) {
    if (*cantidad < MAX_ESTUDIANTES) {
        printf("Ingrese el nombre del estudiante: ");
        scanf(" %[^\n]", estudiantes[*cantidad].nombre);
        
        do {
            printf("Ingrese el grado del estudiante (2 para segundo año, 3 para tercer año): ");
            scanf("%d", &estudiantes[*cantidad].grado);
        } while (estudiantes[*cantidad].grado != 2 && estudiantes[*cantidad].grado != 3);
        
        printf("Ingrese la nota del estudiante: ");
        scanf("%f", &estudiantes[*cantidad].nota);
        
        (*cantidad)++;
        printf("Estudiante agregado exitosamente.\n");
    } else {
        printf("No se pueden agregar más estudiantes. Límite alcanzado.\n");
    }
}

// Función para mostrar la lista de estudiantes
void mostrarEstudiantes(Estudiante estudiantes[], int cantidad) {
    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("\n--- Lista de Estudiantes ---\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Nombre: %s | Grado: %d | Nota: %.2f\n", estudiantes[i].nombre, estudiantes[i].grado, estudiantes[i].nota);
    }
}

// Función para actualizar la nota de un estudiante
void actualizarNota(Estudiante estudiantes[], int cantidad) {
    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    char nombre[50];
    int encontrado = 0;

    printf("Ingrese el nombre del estudiante cuya nota desea actualizar: ");
    scanf(" %[^\n]", nombre);

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(estudiantes[i].nombre, nombre) == 0) {
            printf("Nota actual de %s: %.2f\n", estudiantes[i].nombre, estudiantes[i].nota);
            printf("Ingrese la nueva nota: ");
            scanf("%f", &estudiantes[i].nota);
            printf("Nota actualizada exitosamente.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Estudiante no encontrado.\n");
    }
}
