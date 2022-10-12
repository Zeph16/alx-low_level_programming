#ifndef _SEARCHING_ALGOS_H
#define _SEARCHING_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);


#endif
