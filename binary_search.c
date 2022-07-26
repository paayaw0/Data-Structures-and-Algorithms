// for ordered array

#include <stdio.h>
#include "big_o.h"

int binary_search(int numbers[], int lower_bound_index, int upper_bound_index, int search_value, int *found_value_ptr, int *steps_ptr) {
    while(lower_bound_index<upper_bound_index) {
        *steps_ptr = *steps_ptr+1;
        int midpoint_index = (lower_bound_index+upper_bound_index)/2;

        if(search_value == numbers[midpoint_index]) {
            *found_value_ptr = midpoint_index;
            break;
        }else if(search_value > numbers[midpoint_index]) {
            lower_bound_index = midpoint_index + 1;
        }else if(search_value < numbers[midpoint_index]) {
            upper_bound_index = midpoint_index - 1;
        }
    }
    
    return *found_value_ptr;
}

int main(void) {
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    int steps = 0;
    int array_length = sizeof(numbers)/sizeof(int);
    int data_size = array_length;
    int lower_bound_index = 0;
    int upper_bound_index = array_length-1;
    int search_value = 8;
    int found_value = 0;

    
    binary_search(numbers, lower_bound_index, upper_bound_index, search_value, &found_value, &steps);

    if(numbers[found_value]==search_value) {
        printf("found value %d\n", numbers[found_value]); 
    }else{
        puts("value not found!");   
    }

    printf("o_of_n is-> %s number of steps %d\n", o_of_n(data_size, steps), steps);
    
}