// TODO

#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    const char *rslt = NULL;
    int cmp_rslt = 0;

    for (int i = 0; *(haystack + i) != '\0'; i++) {
        if (*(haystack + i) == *needle) {
            cmp_rslt = 0;
            rslt = (haystack + i);
            for (int j = 0; needle[j] != '\0'; j++) {
                if(rslt[j] != needle[j]){
                    cmp_rslt = rslt[j] - needle[j];
                    break;
                }
            }
            if (cmp_rslt == 0) {
                return (char*)rslt;
            }
        }
    }

    return (char *)rslt;
}
