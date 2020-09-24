#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *rslt = NULL;
    char *sub_pnt = NULL;
    char *s_buf = (char *)str;
    int str_len = 0;
    int sub_len = 0;
    int repl_len = 0;
    int rslt_len = 0;
    int sub_amt = 0;
    int str_i = 0;
    int rslt_i = 0;

    if (s_buf && sub && replace) {
        sub_amt = mx_count_substr(s_buf, sub);

        if (sub_amt == 0) {
            return s_buf;
        }

        write(1, "\nlol\n", 5);

        str_len = mx_strlen(s_buf);
        sub_len = mx_strlen(sub);
        repl_len = mx_strlen(replace);

        rslt_len = str_len - (sub_len - repl_len) * sub_amt;
        sub_pnt = mx_strstr((s_buf + str_i), sub);
        rslt = mx_strnew(rslt_len);

        while (*(s_buf + str_i)) {
            if (sub_pnt && (s_buf + str_i) == sub_pnt) {
                mx_strcat(rslt, replace);
                str_i += sub_len;
                rslt_i += repl_len;
                sub_pnt = mx_strstr((s_buf + str_i), sub);
            } 
            else {
                *(rslt + rslt_i++) = *(s_buf + str_i++);
            }
        }
    }

    return rslt;
}
