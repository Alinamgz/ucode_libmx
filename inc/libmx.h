#pragma once

// ======= defines =======

// ======= structs =======

typedef struct s_calcul {
    unsigned long number;
    unsigned long quot;
    unsigned long rem;
    int size;
}              t_calcul;

typedef struct s_bin_search {
    int left;
    int right;
    int mid;
    int comp;
}              t_bin_search;

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

// ======= includes =======
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

// ======= funcs =======

// ------- UTILS -------
char *mx_nbr_to_hex(unsigned long nbr);

double mx_pow(double n, unsigned int pow);

int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_sqrt(int x);

unsigned long mx_hex_to_nbr(const char *hex);

void mx_foreach(int *arr, int size, void (*f)(int));
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);

// ------- STRING -------
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

void mx_strdel(char **str);
void mx_str_reverse(char *s);
void mx_swap_char(char *s1, char *s2);

// ------- MEMORY -------

// ------- LIST -------

// ------- OPTIONAL -------
