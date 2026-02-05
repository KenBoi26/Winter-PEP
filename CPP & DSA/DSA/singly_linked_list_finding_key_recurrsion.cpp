#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = nullptr;
        }
};

void insertionAtEnd(Node* &head, int key){
    Node* newNode = new Node(key);

    if(head == nullptr){
        head = newNode;
        return;
    };

    Node* temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertionAtStart(Node* &head, int key){
    Node* newNode = new Node(key);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    newNode->next = temp;
    head = newNode;
}

bool searchElement(Node* head, int key){
    if(head == nullptr) return false;

    if(head -> data == key){
        return true;
    }

    return searchElement(head->next, key);
}

int main(){

    Node* head = nullptr;

    insertionAtEnd(head,1);

    insertionAtEnd(head, 2);

    insertionAtStart(head, 3);

    cout << searchElement(head, 15);

    return 0;
}