#include <stdio.h>

int main() {
    int opcion;
    char nombre[50];
    int edad;

    printf("===============================\n");
    printf(" SISTEMA DE REGISTRO DE ESTUDIANTES\n");
    printf("===============================\n");

    printf("1. Registrar estudiante\n");
    printf("2. Consultar estudiantes\n");
    printf("3. Salir\n");

    printf("\nSelecciona una opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingresa el nombre: ");
        scanf(" %49[^\n]", nombre);

        printf("Ingresa la edad: ");
        scanf("%d", &edad);

        printf("\nEstudiante registrado:\n");
        printf("Nombre: %s\n", nombre);
        printf("Edad: %d\n", edad);
    }
    else if (opcion == 2) {
        printf("Todavia no hay estudiantes registrados.\n");
    }
    else if (opcion == 3) {
        printf("Hasta pronto.\n");
    }
    else {
        printf("Opcion no valida.\n");
    }

    return 0;
}
