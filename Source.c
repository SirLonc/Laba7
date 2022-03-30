#include "Header.h"
#define len 11

int *freq(t)
{
    int a[len] = { -5,-4,-3,-2,-1,0,1,2,3,4,5 };
    int frequency_array[len] = { 0 };
    for (int i = 0; i < t; i++) {
        int random_num = (-5) + rand() % 11;
        for (int k = 0; k <= len; k++) {
            if (random_num == a[k]) {
                frequency_array[k] += 1;
            }
        }
    }
    return frequency_array;
}