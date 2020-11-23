#pragma once
#ifndef HEADER
#define HEADER

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "hex_to_nbr.h"
#include "nbr_to_hex.h"


int mx_strlen(const char *);

void mx_printstr(const char *);

void mx_printchar(char);

void mx_printint(int);

double mx_pow(double, unsigned int);

int mx_sqrt(int);

char *mx_strnew(const int);

char *mx_nbr_to_hex(unsigned long);

unsigned long mx_hex_to_nbr(const char *);

void mx_foreach(const int *arr, int size, void (*f)(int));

int mx_strncmp(const char *, const char *, int);

int mx_binary_search(char **, int , const char *, int *);

int mx_bubble_sort(char **, int);

int mx_strcmp(const char *, const char *);

void mx_swap_char(char *, char *);

void mx_str_reverse(char *);

char *mx_itoa(int);

char *mx_strcpy(char *, const char *);

void mx_strdel(char **);

char *mx_strdup(const char *);

char *mx_strndup(const char *, size_t);

char *mx_strncpy(char *, const char *, int);

char *mx_strcat(char *, const char *);

char *mx_strstr(const char *, const char *);

int mx_count_substr(const char *, const char *);

int mx_count_words(const char *, char);

char *mx_strtrim(const char *str);

bool mx_islower(int);

bool mx_isupper(int);

bool mx_isdigit(int);

bool mx_isalpha(int);

bool mx_isspace(char);

char *mx_strchr(const char *, int);

char **mx_strsplit(char const *, char);

char *mx_strjoin(char const *, char const *);

char *mx_file_to_str(const char *);

void mx_del_strarr(char ***);

int mx_get_char_index(const char *, char);

int mx_get_substr_index(const char *, const char *);

char *mx_del_extra_spaces(const char *);

int mx_read_line(char **, size_t, char, const int);

void *mx_memset(void *, int, size_t);

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int mx_memcmp(const void *s1, const void *s2, size_t n);

void *mx_memchr(const void *s, int c, size_t n);

void *mx_memrchr(const void *s, int c, size_t n);

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);

void *mx_memmove(void *dst, const void *src, size_t len);

void *mx_realloc(void*ptr, size_t size);

#endif
