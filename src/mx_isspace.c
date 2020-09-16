#include "libmx.h"

bool mx_isspace(char c) {
    if(c == 32 || (c >= 9 && c <= 13)) {
        return 1;
    }

    return 0;
}

/*
white space chars : 
'' space; 32
\t horisontal tab;9
\n newline;10
\v vertical tab;11
\f from feed;12
\r carrige return; 13
*/
