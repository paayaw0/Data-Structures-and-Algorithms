char *o_of_n(int n_elements, int steps) {
    char *value = " ";

    if(n_elements==steps) {
        value = "O(n)";
    }else if(steps<n_elements) {
        value = "O(1) or 0(log n)";
    }else if((n_elements/2)<=steps<=(2*n_elements)) {
        value = "0(n2)";
    }

    return value;
}