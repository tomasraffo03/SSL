#include <stdio.h>
#include "conversion.h"

void mostrarTabla();

int main()
{

    pruebas();

    printf("FH \t C \n");
    mostrarTabla(0.00, 110.00, 10.00, convertir_a_celsius);

    mostrarTabla()

    printf("\n");

    printf("C \t FH \n");
    mostrarTabla(0.00, 110.00, 10.00, convertir_a_fh);

    return 0;
}

void mostrarTabla(double min, double max, double salto, double (*funcionDeConversion)(double))
{
    for (double i = min; i < max; i += salto)
    {
        printf("%.2f \t | %.2f \n", i, funcionDeConversion(i));
    }
}