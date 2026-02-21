#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* sortedInsert(Node* head, int key) {
        // Code here
    Node* node = new Node(key);
    if(head == nullptr){
        head = node;
        return head;
    }
    if(head->data > key){
        node->next = head;
        return node;
    }
    
    Node* temp = head;
    
    while(temp->next){
        if(temp->next->data > key){
            break;
        }
        temp = temp->next;
    }
    
    node->next = temp->next;
    temp->next = node;
    
    return head;
};


int main(){


    return 0;
}