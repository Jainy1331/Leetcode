#ifndef UNIONFIND_H
#define UNIONFIND_H

#include <iostream>
#include <vector>

class UnionFind {
public:
    UnionFind(int size);
    int find(int x);
    void unionSet(int x, int y);
    bool connected(int x, int y);

private:
    std::vector<int> root;
};

#endif
