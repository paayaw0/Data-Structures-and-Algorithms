#include <stdio.h>
#include <math.h>

char *o_of_n(int n_elements, int steps) {
    char *value = " ";
    n_elements--;

    if(n_elements==steps) {
        value = "O(n)";
    }else if(n_elements<steps) {
        value = "O(n2)";
    }else if((int)log(n_elements) == steps) {
        value = "0(log n)";
    }else{
        value = "O(1)";
    }
    return value;
}