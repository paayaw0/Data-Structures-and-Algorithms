// bubble sort algorithm

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

void array_printout(int array[], int array_length) {
    for(int i=0; i<array_length; i++) {
        printf("%d, ", array[i]);
    }
    puts("");

    return;
}

int main(void) {
    // int numbers[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }; // worst case scenario 
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9}; // best case scenario
    int array_length = sizeof(numbers)/sizeof(int);
    int limit_index = array_length - 1;
    bool unsorted = true;

    while(unsorted){
        unsorted = false;

        for(int index=0; index<limit_index;index++) {
            array_printout(numbers, array_length);
            
            if(numbers[index]>numbers[index+1]) {
                int temp = numbers[index];
                numbers[index] = numbers[index+1];
                numbers[index+1] = temp; 
                unsorted = true;
            }
        }
        limit_index--;
    }

    puts("sorted!");
    
    array_printout(numbers, array_length);
    return 0;
}

