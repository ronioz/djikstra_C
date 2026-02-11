#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

/*
    CPP EXAMPLE:
    priorty_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    where
    pair<int, int> looks like : {distance, node index}
*/

typedef struct {
    int dist;
    int node;
} PQNode; //pair<int, int> : {distance, node index}

typedef struct {
    PQNode* data; //the min-heap constructor looks like a flattened tree, where the children of the node (i) are on the indexes (2*i+1) and (2*i+2)
    int size;
    int capacity;
} PriorityQueue;

void pq_init(PriorityQueue* pq, int capacity);
void pq_push(PriorityQueue* pq, int distance, int node);
void pq_pop(PriorityQueue* pq);
PQNode pq_top(PriorityQueue* pq);
int pq_empty(PriorityQueue* pq);
void pq_free(PriorityQueue* pq);

#endif