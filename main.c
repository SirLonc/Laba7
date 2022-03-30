#include <stdio.h>
#include "Header.h"
#include <stdlib.h>

int main() {
	int sample_size = 50000;
	int range_size = 11;
	int elem_of_freq_array;
	for (int i = 0; i < 11; i++) {
		elem_of_freq_array = *(freq(sample_size) + i);
		printf("%d \n", elem_of_freq_array);
	}

}