#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *result = NULL;
    t_calcul to_hex = {nbr, nbr, 0, 0};

    for (; to_hex.number > 0; to_hex.size++)
        to_hex.number /= 16;

    result = mx_strnew(to_hex.size);
    if (result == NULL) return NULL;

    for (; to_hex.size > 0; to_hex.size--) {
        to_hex.number = to_hex.quot;
        to_hex.quot = to_hex.number / 16;
        to_hex.rem = to_hex.number % 16;

        if (to_hex.rem >= 10)
            result[to_hex.size - 1] = (to_hex.rem + 87);
        else
            result[to_hex.size - 1] = (to_hex.rem + 48);
    }
    return result;
}
