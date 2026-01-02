#include "vector_int.h"
#include <stdio.h>
#include <stdlib.h>

void init_vector(vectorInt* v){
    v->data = NULL;
    v->size = 0;
} //creating a vector

void push_back(vectorInt* v, int value){
    v->data = realloc(v->data, (v->size+1)*sizeof(int));
    v->data[v->size] = value; 
    v->size++;
} //in C++ the vector has many functions, but here I only need push_back. Dynamically adding an element in the tail of the array

void clear_vector(vectorInt* v){
    free(v->data);
    v->data = NULL;
    v->size = 0;
} //clearing up the vector, not to have any memory leaks