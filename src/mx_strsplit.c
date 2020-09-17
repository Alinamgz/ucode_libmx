#include "libmx.h"
// TODO
// look spr 7 tsk 8
char **mx_strsplit(const char *s, char c) {
    char **rslt = NULL;
    char *buf_s = (char*)s;
    int word_cnt = 0;
    int w_len = 0;

    if (buf_s) {
        word_cnt = 1 + mx_count_words(s, c);
        rslt = (char**)malloc(sizeof(char*) * word_cnt);

        for (int i = 0; i <= word_cnt; i++) {
            if (i == word_cnt) {
                // free(rslt[i]);
                write(1, "\n\nlol\n\n", 7);
                rslt[i] = NULL;
            }
            else {
                while(*buf_s == c) buf_s++;
                for (w_len = 0; buf_s[w_len] && buf_s[w_len] != c; w_len++);
                rslt[i] = mx_strndup(buf_s, w_len);
                buf_s += w_len;
            }
        }
    }

    return rslt;
}
