/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad Mutua(Par o impar)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 13 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <stdio.h>
#include "operaciones.h"

int main() {
    int n;

    // Solicita al usuario que ingrese un número entero
    printf("Introduce un número entero: ");
    while (scanf("%d", &n) != 1) {  // Validación: solo acepta enteros
        printf("Entrada no válida. Introduce un número entero: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    // Determina si el número es par o impar
    if (is_even(n)) {
        printf("El número %d es par.\n", n);
    } else {
        printf("El número %d es impar.\n", n);
    }

    return 0;
}
