#pragma once

// ======= defines =======
// buffer size for read()
#define BUFFER_SIZE 64

// ======= includes =======
#include <fcntl.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

// ======= structs =======

typedef struct s_calcul {
    unsigned long number;
    unsigned long quot;
    int rem;
    int size;
    int base;
}              t_calcul;

typedef struct s_bin_search {
    int left;
    int right;
    int mid;
    int comp;
}              t_bin_search;

typedef struct s_file_to_str {
    int src_fd;
    char* dst;
    char* result;
    char buff[BUFFER_SIZE + 1];
    ssize_t src_rslt;
    ssize_t dst_rslt;
}              t_file_to_str;


typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

// ======= funcs =======

// ------- UTILS -------
char *mx_itoa(int number);
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
void mx_print_strarr(char **arr, const char *delim);

// ------- STRING -------
char *mx_itoa(int number);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

int mx_count_words(const char *str, char delimiter);
int mx_get_char_index(const char *str, char c);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

void mx_strdel(char **str);
void mx_str_reverse(char *s);
void mx_swap_char(char *s1, char *s2);

// ------- MEMORY -------

// TODO udachi

// ------- LIST -------
int mx_list_size(t_list *list);

t_list *mx_create_node(void *data);
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *, void *));

void mx_pop_back(t_list **list);
void mx_pop_front(t_list **list);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);

// ------- OPTIONAL -------
// TODO nasyp syda wsiakoy poleznoi melochi
int mx_strlen_nullcheck(const char *s);
unsigned long mx_mod(int num);
