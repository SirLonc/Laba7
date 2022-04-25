#include <stdio.h>
#include "Header.h"
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
	int sample_size = 500000;
	int first_element_of_range;
	int last_element_of_range;
	printf("input first element of the range\n");
	scanf("%d", &first_element_of_range);
	printf("input last element of the range\n");
	scanf("%d", &last_element_of_range);

	int range_size = last_element_of_range - first_element_of_range + 1;
	int elem_of_freq_array;
	for (int i = 0; i < range_size ; i++) {
		elem_of_freq_array = *(freq(sample_size,first_element_of_range, last_element_of_range, range_size) + i);
		printf("%d - %d \n", first_element_of_range + i, elem_of_freq_array);
	}

}
