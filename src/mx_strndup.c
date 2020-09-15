#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *result = NULL;

	result = mx_strnew(n);

	mx_strncpy(result, s1, n);

	return result;
}
