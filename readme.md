# Dijkstra Shortest Path (C Implementation)

This project implements **Dijkstra's algorithm** to find the shortest paths from a **single source vertex** to **all other vertices** in a **weighted, directed graph**.

The graph is **0-indexed**, and all vertex IDs are in the range: 0 .. n-1

In order to mimic `std::vector<int>` from C++, a **custom dynamic array implementation** is provided.

---

## 📁 Project Structure
├── djikstra.c
├── vector_int.h
├── vector_int.c
├── graph1.txt
├── graph2.txt
├── graph3.txt


### File Descriptions

#### `djikstra.c`
Main file of the project. Responsible for:
- Reading graph data from input files
- Initializing the graph structure
- Running Dijkstra’s algorithm
- Printing shortest paths
- Freeing all dynamically allocated memory

#### `vector_int.h`
Header file containing:
- `struct` definitions
- Function declarations for the dynamic integer vector

#### `vector_int.c`
Implementation of a custom `vector<int>`-like structure in C.

Implemented functions:
- `init_vector` – initializes the vector
- `push_back` – dynamically appends an element
- `clear_vector` – frees allocated memory

#### `graph*.txt`
Test graph inputs.

- `graph1.txt` – directed graph
- `graph2.txt` – undirected graph  
  (edges are explicitly given as both `(u, v, w)` and `(v, u, w)`)
- `graph3.txt` – directed graph

---

## 📄 Input Format

