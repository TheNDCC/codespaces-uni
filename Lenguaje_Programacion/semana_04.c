#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100
#define MAX_NOMBRE 50


char nombres[MAX_ESTUDIANTES][MAX_NOMBRE];
int grados[MAX_ESTUDIANTES];              
float notas[MAX_ESTUDIANTES];   

void agregarEstudiante(int *cantidad) {
    if (*cantidad >= MAX_ESTUDIANTES) {
        printf("Límite de estudiantes alcanzado.\n");
        return;
    }

    printf("Ingrese el nombre del estudiante: \n");
    scanf(" %[^\n]", nombres[*cantidad]);

  
    do {
        printf("Ingrese el grado (2: segundo año, 3: tercer año): \n");
        scanf("%d", &grados[*cantidad]);
        if (grados[*cantidad] != 2 && grados[*cantidad] != 3) {
            printf("Grado inválido. Solo se acepta 2 o 3.\n");
        }
    } while (grados[*cantidad] != 2 && grados[*cantidad] != 3);
    
  
    do {
        printf("Ingrese la nota (0 a 100): \n");
        scanf("%f", &notas[*cantidad]);
        if (notas[*cantidad] < 0 || notas[*cantidad] > 100) {
            printf("Nota inválida. Debe estar entre 0 y 100.\n");
        }
    } while (notas[*cantidad] < 0 || notas[*cantidad] > 100);

    (*cantidad)++; 
    printf("Estudiante agregado correctamente.\n");
}


void mostrarEstudiantes(int cantidad) {
    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("--- Lista de Estudiantes ---\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Nombre: %s | Grado: %d | Nota: %.2f\n", nombres[i], grados[i], notas[i]);
    }
}


void actualizarNota(int cantidad) {
    char nombre[MAX_NOMBRE];
    int encontrado = 0;

    if (cantidad == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("Ingrese el nombre del estudiante: \n");
    scanf(" %[^\n]", nombre);

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(nombres[i], nombre) == 0) {
            printf("Nota actual: %.2f\n", notas[i]);
            printf("Ingrese la nueva nota: \n");
            scanf("%f", &notas[i]);
            printf("Nota actualizada.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Estudiante no encontrado.\n");
    }
}


int main() {
    int cantidad = 0, opcion;

    do {
        printf("\n1. Agregar estudiante david\n2. Mostrar estudiantes\n3. Actualizar nota\n4. Salir\n\n");
        printf("Seleccione una opción: \n");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: agregarEstudiante(&cantidad); break;
            case 2: mostrarEstudiantes(cantidad); break;
            case 3: actualizarNota(cantidad); break;
            case 4: printf("Saliendo...\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while (opcion != 4);

    return 0;
}