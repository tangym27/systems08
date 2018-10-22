#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int num){
	long size = (num * log(num) * 1.5); // establish a range
	char* nums = malloc(size); //create array of size

	//initalize array
	for (int i = 0; i < size ; i++){
		nums[i] = 0;
	}

	int num_counter = 0; // counts the nth prime number
	int arr_counter = 1; // index of array
	
	while(num_counter < num){ // have not reached target prime yet
		arr_counter++;		// move to next index
		if(nums[arr_counter] == 0){ // value is not 'touched' yet (is a prime num)
			for (int i = arr_counter * 2; i < size ; i += arr_counter ){ // 'touch' all future iterations
					nums[i] = 1;
			}
			num_counter++;  // update prime num counter
		}
	}

	return arr_counter; // return index
}

