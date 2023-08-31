#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
#include <string.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _pow(int base, int n);
int get_endianness(void);
unsigned long int _pow2(unsigned int base, unsigned int n);
#endif /* MAIN_H */
