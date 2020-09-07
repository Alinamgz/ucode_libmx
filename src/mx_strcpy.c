#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    int i;

    if( !src) {
        return 0;
    }
    
    for ( i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    return dst;
}
    
