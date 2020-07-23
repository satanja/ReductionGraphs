#include "AdjHash.h"

AdjHash::AdjHash(size_t size)
{
    n = size;
    adj.resize(n);
}

void AdjHash::erase(int vertex)
{
    for (auto dest : adj[vertex])
    {
        adj[dest].erase(vertex);
    }
    adj[vertex].clear();
}

void AdjHash::insert_edge(int source, int dest)
{
    adj[source].insert(dest);
    adj[dest].insert(source);
}

void AdjHash::resize(size_t vertices)
{
    n = vertices;
    adj.resize(n);
}

int AdjHash::vertices()
{
    return n;
}