#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[50];
    int grado; // 2 para segundo año, 3 para tercer año
    float nota; // Nota del estudiante
} Estudiante;

void menu() {
    printf("\n--- Menú de Gestión de Notas ---\n");
    printf("1. Agregar estudiante\n");
    printf("2. Mostrar estudiantes\n");
    printf("3. Actualizar nota de un estudiante\n");
    printf("4. Salir\n");
}

int main(){
    int cantidad = 0;
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