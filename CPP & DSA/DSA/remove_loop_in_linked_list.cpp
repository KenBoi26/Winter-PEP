#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void removeLoop(Node* head) {
    // code here
    Node* slow = head;
    Node* fast = head;

    while(fast!=nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    if(fast == nullptr || fast->next == nullptr){
        return;
    }

    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    while(fast->next != slow){
        fast = fast->next;
    }
    
    fast->next = nullptr;
}

int main(){


    return 0;
}