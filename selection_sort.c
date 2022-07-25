#include <stdio.h>

void array_printout(int array[6], int array_length) {
    for(int i=0; i<array_length; i++) {
        printf("%d, ", array[i]);
    }

    return;
}

int main(void) {
    // int array[10] = {9,8,7,6,5,4,3,2,1,0}; // worst case scenario
    int array[10] = {0,1,2,3,4,5,6,7,8,9}; // best case scenario
    int array_length = sizeof(array)/sizeof(int);

    array_printout(array, array_length);

    for(int index=0; index<array_length-1; index++) {
        int index_of_lowest_value = array[index];
        
        for(int inner_index = index+1; inner_index<array_length; inner_index++) {
            if(array[index_of_lowest_value] > array[inner_index]) {
                index_of_lowest_value = array[inner_index];
            }
        }

        if(index_of_lowest_value!=index) {
            int temp = array[index]; 
            array[index] = array[index_of_lowest_value];
            array[index_of_lowest_value] = temp;
        }

        puts(" ");
        array_printout(array, array_length);
    }
    
    puts(" ");
    puts("sorted!");
    array_printout(array, array_length);
}