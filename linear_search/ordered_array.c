#include <stdio.h>
#include "../big_o.h"

int main(void) {
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
     int array_length = sizeof(numbers)/sizeof(int);
    int search_value = 9;
    int data_size = array_length;
    int steps = 0;

    for(int index=0; index<array_length; index++) {
        steps++;
        
        if(numbers[index]==search_value) {
            printf("%d\n", numbers[index]);
            break;
        }
    }

    printf("linear search of classical of size %d to %d steps with o of n->%s\n", data_size, steps, o_of_n(data_size, steps));
    return 0;    
}