#ifndef SWAP_H
#define SWAP_H
#include "swap.h"
#endif

void selection_sort(int *items, int size)
{
    int min;

    for(int i = 0; i < size - 1; i++)
    {
        min = i;

        for(int j = i + 1; j < size; j++)
        {
            if(items[j] < items[min])
            {
                min = j;
            }
        }

        swap(&items[min], &items[i]);
    }
}