#include <stdio.h>
#include "big_o.h"

void array_printout(int array[6], int array_length) {
    for(int i=0; i<array_length; i++) {
        printf("%d, ", array[i]);
    }

    return;
}

int main(void) {
    // int array[10] = {9,8,7,6,5,4,3,2,1,0}; // worst case scenario
    // int array[10] = {0,1,2,3,4,5,6,7,8,9}; // best case scenario
    int array[10] = {2,1,3,5,4,6,8,7,9,0}; // average case scenario
    int array_length = sizeof(array)/sizeof(int);
    int data_size = array_length;
    int steps = 0;

    array_printout(array, array_length);

    for(int index=1; index<array_length; index++){
        int temp_value = array[index];
        int index_left_of_temp_value = index - 1;

        while(index_left_of_temp_value>=0){
            steps++;

            if(temp_value < array[index_left_of_temp_value]){
                array[index_left_of_temp_value+1] = array[index_left_of_temp_value];
                index_left_of_temp_value = index_left_of_temp_value - 1;
            }else{
                break;
            }
            
            array[index_left_of_temp_value+1] = temp_value;
            puts(" ");

            
            array_printout(array, array_length);
        }
    }

    puts(" ");
    puts("sorted!");
    array_printout(array, array_length);
    printf("o_of_n is-> %s number of steps %d\n", o_of_n(data_size, steps), steps);
}