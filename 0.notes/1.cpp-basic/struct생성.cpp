#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

struct Node {
    Node(int from, int to, int cost):from(from), to(to), cost(cost) {}
    int from, to, cost;

    bool operator<(const Node&a) {
        return a.cost < cost;
    }
};

vector<Node> nodes;

int main() {
    nodes.push_back(Node(1, 2, 5));
    nodes.push_back(Node(2, 3, 3));
    nodes.push_back(Node(3, 4, 2));
    nodes.push_back(Node(4, 5, 4));
    nodes.push_back(Node(5, 6, 1));

    for(int i = 0; i < 5; i++) printf("%d %d %d\n", nodes[i].from, nodes[i].to, nodes[i].cost);    
}