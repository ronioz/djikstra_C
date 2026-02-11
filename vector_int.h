#ifndef VECTOR_INT_H
#define VECTOR_INT_H

typedef struct {
    int capacity;
    int* data;
    int size;
} vectorInt; //defining vectorInt (equivalent to vector<int> in cpp)

void init_vector(vectorInt* v);
void push_back(vectorInt* v, int value);
void clear_vector(vectorInt* v); //declaring all the functions, which will expand in vector_int.c

#endif