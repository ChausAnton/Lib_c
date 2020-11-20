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


#endif
