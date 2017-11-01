#ifndef SWAP_H
#define SWAP_H
#include "swap.h"
#endif

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}