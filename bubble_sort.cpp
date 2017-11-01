#ifndef SWAP_H
#define SWAP_H
#include "swap.h"
#endif

void bubble_sort(int *items, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(items[i] > items[i - 1]) 
            {
                swap(&items[i], &items[i - 1]);
            }
        }
    }
}