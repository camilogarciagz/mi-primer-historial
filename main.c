#include <stdio.h>

int main() {
    int opcion;
    char nombre[50];
    int edad;

    printf("\n====================================\n");
    printf("   SISTEMA DE REGISTRO DE ESTUDIANTES\n");
    printf("====================================\n");

    printf("\n1. Registrar estudiante\n");
    printf("2. Consultar estudiantes\n");
    printf("3. Salir\n");

    printf("\nSelecciona una opcion: ");

    if (scanf("%d", &opcion) != 1) {
        printf("\nError: debes ingresar un numero.\n");
        return 1;
    }

    if (opcion == 1) {
        printf("\n--- REGISTRO DE ESTUDIANTE ---\n");

        printf("Ingresa el nombre: ");
        scanf(" %49[^\n]", nombre);

        printf("Ingresa la edad: ");

        if (scanf("%d", &edad) != 1 || edad < 0) {
            printf("Edad no valida.\n");
            return 1;
        }

        printf("\nEstudiante registrado correctamente.\n");
        printf("Nombre: %s\n", nombre);
        printf("Edad: %d\n", edad);
    }
    else if (opcion == 2) {
        printf("\nNo hay estudiantes guardados.\n");
    }
    else if (opcion == 3) {
        printf("\nGracias por utilizar el sistema.\n");
    }
    else {
        printf("\nOpcion no valida. Intenta nuevamente.\n");
    }

    return 0;
}
