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

#endif
