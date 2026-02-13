#include<bits/stdc++.h>
using namespace std;

/*
**Terms:**

- Root → the node that starts everything i.e. the topmost node.
- Leaf → a node without any children
- Internal Node → if a node has a child.
- Siblings → 2 nodes that have the same parent.
- Cousins → when their parents are siblings OR when they have the same grandparent.
- Path → the way to reach from one node to another.
- Length of a Path → number of nodes - 1

*/

class Node{
    public:
        int data;
        Node* right;
        Node* left;
    
    Node(int val){
        data = val;
        right = nullptr;
        left = nullptr;
    }

};

int main(){


    return 0;
}