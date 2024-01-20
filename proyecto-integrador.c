#include <stdio.h>
 
int main() {
    float cotizaciones[5];
    float suma = 0;
    float promedio;
    float min = 9999999999;
    float max = 0;
 
    for (int i = 0; i < 5; i++) {
        float valor;
        printf("Ingrese la cotización de la empresa %d: ", i+1);
        scanf("%f", &valor);
 
        // Verificar si el valor ingresado es negativo
        while (valor < 0) {
            printf("No se permiten valores negativos. Ingrese nuevamente: ");
            scanf("%f", &valor);
        }
 
        cotizaciones[i] = valor;
 
        if (cotizaciones[i] < min) {
            min = cotizaciones[i];
        }
        if (cotizaciones[i] > max) {
            max = cotizaciones[i];
        }
        suma += cotizaciones[i];
    }
    promedio = (suma - min - max) / 3;
 
    printf("Cotizaciones eliminadas: %.2f y %.2f\n", min, max);
    printf("Promedio de las cotizaciones restantes: %.2f\n", promedio);
    return 0;
}