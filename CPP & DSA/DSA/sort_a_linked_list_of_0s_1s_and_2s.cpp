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

Node* segregate(Node* head) {
    // code here
    Node* dummyZero = new Node(-1);
    Node* dummyOne = new Node(-1);
    Node* dummyTwo = new Node(-1);
    
    Node* zp = dummyZero;
    Node* op = dummyOne;
    Node* tp = dummyTwo;
    
    while(head != nullptr){
        if(head->data == 0){
            zp->next = head;
            zp = zp->next;
        }else if(head->data == 1){
            op->next = head;
            op = op->next;
        }else{
            tp->next = head;
            tp = tp->next;
        }
        
        head = head->next;
    }
    
    tp->next = nullptr;
    op->next = dummyTwo->next;
    zp->next = dummyOne->next;
    
    return dummyZero->next;
}

int main(){


    return 0;
}