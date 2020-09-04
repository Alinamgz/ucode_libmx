#pragma once

// ------- defines -------

// ------- structs -------

// ------ includes -------
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

// -------- funcs --------

// utils
double mx_pow(double n, unsigned int pow);

int mx_strlen(const char *s);

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
