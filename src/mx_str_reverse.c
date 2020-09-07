#include "libmx.h"

void mx_str_reverse(char *s) {
    int length = mx_strlen(s);

    for (int i = 1; i*2 <= length; i++) {
        mx_swap_char( (s + i - 1), (s + length - i));
    }
}
