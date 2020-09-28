#include "libmx.h"
// TODO seems like fixed it, have to test well

void *mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len) {
    unsigned char *uc_big = (unsigned char *)big;
    unsigned char *uc_lil = (unsigned char *)little;
    int cmp_rslt = 0;

    for (size_t i = 0; i < big_len && uc_big[i]; i++) {
        if (*(uc_big + i) == *uc_lil) {
            cmp_rslt = mx_memcmp((uc_big + i), uc_lil, little_len);

            if (cmp_rslt == 0) {
                return (void *)(uc_big + i);
            }
        }
    }

    return (void *)NULL;
}
