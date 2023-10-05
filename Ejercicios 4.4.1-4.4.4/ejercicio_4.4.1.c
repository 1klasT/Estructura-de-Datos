#include <stdio.h>

void sumar(void *num1, void *num2, void *resultado, int tipo);

int main() {
    int num1 = 1, num2 = 2, resultado_int = 0;
    double num3 = 3.5, num4 = 2.5, resultado_double = 0.0;

    sumar(&num1, &num2, &resultado_int, 1);
    sumar(&num3, &num4, &resultado_double, 2);

    printf("La suma de enteros es: %d\n", resultado_int);
    printf("La suma de números flotantes es: %.2lf\n", resultado_double);

    return 0;
}

void sumar(void *num1, void *num2, void *resultado, int tipo) {
    if (tipo == 1) {
        int *ptr_num1 = (int *)num1;
        int *ptr_num2 = (int *)num2;
        int *ptr_resultado = (int *)resultado;
        *ptr_resultado = *ptr_num1 + *ptr_num2;
    } else if (tipo == 2) {
        double *ptr_num1 = (double *)num1;
        double *ptr_num2 = (double *)num2;
        double *ptr_resultado = (double *)resultado;
        *ptr_resultado = *ptr_num1 + *ptr_num2;
    }
}