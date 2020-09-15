// TODO

#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int rslt = -2;
    int cmp_rslt = 0;

    if (str && sub) {
        for (rslt = 0; str[rslt]; rslt++) {
            if(str[rslt] == sub[0]) {
                cmp_rslt = 0;
                for(int j = 0; sub[j] != '\0'; j++) {
                    if (str[rslt + j] != sub[j]) {
                        cmp_rslt = str[rslt + j] - sub[j];
                        break;
                    }
                }
                if (cmp_rslt == 0)
                    return rslt;
            }
        }
        rslt = -1;
    }
    return rslt;
}
