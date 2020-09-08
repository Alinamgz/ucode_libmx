#include "libmx.h"

// TODO read, understant, REFACTOR!
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *, void *)) {
    t_list *buff = list;
    t_list *temp;
    int count = 0;

    while (buff->next) {
        if (cmp(buff->data, buff->next->data)) {
            temp = buff->next->data;
            buff->next->data = buff->data;
            buff->data = temp;
        }
        buff = buff->next;
        count++;
    }

    for (int i = count; i > 0; i--) {
        buff = list;

        for (int j = 0; j < i; j++) {
            if (cmp(buff->data, buff->next->data)) {
                temp = buff->next->data;
                buff->next->data = buff->data;
                buff->data = temp;
            }
            buff = buff->next;
        }
    }
    return list;
}
