#include "libmx.h"

char *mx_strdup(const char *s1) {
    // if(!s1) {
    //     return 0;
    // }

    int src_size = mx_strlen(s1);
    char *result = mx_strnew(src_size);
    mx_strcpy(result, s1);

    return result;
}
