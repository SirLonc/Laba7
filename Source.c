#include "Header.h"

int* freq(int sample_size, int first_element_of_range, int last_element_of_range, int range_size)
{
    
    int* a;
    int* frequency_array;


    a = (int*)malloc(range_size * sizeof(int));
    frequency_array = (int*)malloc(range_size * sizeof(int));

    for (int i = 0; i < range_size; i++) {
        a[i] = first_element_of_range + i;
    }

    for (int i = 0; i < range_size; i++) {
        frequency_array[i] = 0;
    }


    for (int i = 0; i < sample_size; i++) {
        int random_num = first_element_of_range + (rand() % range_size);
        for (int k = 0; k < range_size; k++) {
            if (random_num == a[k]) {
                frequency_array[k] += 1;
            }
        }
    }
    return frequency_array;
}
