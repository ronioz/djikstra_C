This project implements Djikstra's algorithm to find the shortest paths in a weighted, oriented graph.
More precisely, I find the shortest paths to all the vertices from the source node.

The graph is 0-indexed, and all the node values are in the range of (0..n-1)
In the project I implemented the equivalent of vector<int> in C++. To do that, I created two files, vector.h and vector_int.c (Info below)

Files Descriptions:

djikstra.c <- main file, where everything is put together.
    Input from the file, then initializing the graph, then main Djikstra's algorithm and finally freeing up the allocated memory.

vector_int.h <- header file, where all the useful declarations of vector implementations are made

vector_int.c <- .c file, where all the useful functions are written. (the functions, which were declared in the header file)
    init_vector = vector initialization
    push_back = dynamically adding a number to the tail of the array
    clear_vector = since I am using a dynamical memory allocation, freeing up the memory is crucial.

graph1.txt, graph2.txt, graph3.txt <- input test graphs. 
    graph1 and graph3 are oriented
    graph2 is unoriented (the edges are passed as both (u,v,w) and (v,u,w))

Format:
    First three integers are (n, m)
        n = number of vertices
        m = number of edges

    Next m lines contain three integers (v, u, w)
        v = start node
        u = end node
        w = weight of the edge


This code is definitely not safe, and by that I mean, I don't check the failure/success of the malloc, realloc, calloc functions, 
file-opening, handling the graph initialization for any other than 0-indexed oriented graph. But the main djikstra's algorithm is written out
perfectly.

Compilation: gcc (both files ./djikstra.c ./vector_int.c -o main)