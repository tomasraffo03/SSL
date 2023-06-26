#include "conversion.h"
#include <stdio.h>
#include <assert.h>

int pruebas() {
    assert(convertir_a_fh(10.00) == 50.00);
    assert(convertir_a_fh(20.00) == 68.00);
    assert(convertir_a_fh(30.00) == 86.00);
    
    assert(convertir_a_celsius(32.00) == 0.00);
    assert(convertir_a_celsius(50.00) == 10.00);
    assert(convertir_a_celsius(68.00) == 20.00);
}