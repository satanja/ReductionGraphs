#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <iostream>

#pragma once

class Graph
{
public:
    // Erases a vertex and all its incident edges
    virtual void erase(int vertex) = 0;

    // Inserts a new edge
    virtual void insert_edge(int source, int dest) = 0;

    // Reallocates an empty graph of size s
    virtual void resize(size_t vertices) = 0;

    // Gets the number of vertices
    virtual int vertices() = 0;

    // counts the number of connected components
    virtual void traverse() = 0;
};