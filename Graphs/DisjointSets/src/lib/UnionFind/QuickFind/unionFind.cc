// https://leetcode.com/explore/learn/card/graph/618/disjoint-set/3878/
/*
                      Union-find Constructor	QUICK-Find	  Union	  Connected
Time Complexity	  O(N)                      O(1)	      O(N)	  O(1)
*/
#include "unionFind.h"

UnionFind::UnionFind(int sz) : root(sz) {
    for (int i = 0; i < sz; i++) {
        root[i] = i;
    }
    std::cout << "unionFind Operation" << std::endl;
    for (int i : root) std::cout << i << " ";
    std::cout << "\n";
}

int UnionFind::find(int x) {
    std::cout << "Find Operation" << std::endl;
    std::cout << "x : " << x << " and "
              << "root of x : " << root[x] << std::endl;

    return root[x];
}

void UnionFind::unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) {
        for (std::size_t i = 0; i < root.size(); i++) {
            if (root[i] == rootY) {
                root[i] = rootX;
            }
        }
    }
    std::cout << "unionSet Operation" << std::endl;
    for (std::size_t i = 0; i < root.size(); i++) {
        std::cout << i << " ";
        std::cout << root[i] << " " << std::endl;
    }
}

bool UnionFind::connected(int x, int y) {
    return find(x) == find(y);
}
