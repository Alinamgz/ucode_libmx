#include "libmx.h"

bool mx_isupper(int c) {
    if (c > 64 && c < 91) {
        return 1;
    }
    return 0;
}
