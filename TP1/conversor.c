#include <stdio.h>
#include "conversion.h"

double convertir_a_fh(double celsius) {
    return (celsius * 9/5) + 32.00;
};

double convertir_a_celsius(double fh) {
    return 5.00 * (fh - 32.00) / 9.00;
}
