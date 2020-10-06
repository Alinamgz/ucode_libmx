#include "libmx.h"

double mx_timer(void (*f)()) {
    double result;
    clock_t start;
    clock_t end;

    start = clock();
    f();
    end = clock();

    if (end < 0 || start < 0) {
        return -1;
    }

    result = (double)(end - start) / CLOCKS_PER_SEC;
    return result;
}
