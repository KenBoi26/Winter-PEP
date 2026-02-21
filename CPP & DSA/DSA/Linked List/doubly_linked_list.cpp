#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int val){
            this->data = val;
            this->prev = nullptr;
            this->next = nullptr;
        }
};

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;
}

void insertAtPosition(Node* &head, int val, int position){
    Node* newNode = new Node(val);
    if(position == 1){
        insertAtStart(head, val);
        return;
    }

    Node* temp = head;

    while(--position > 1 && temp != NULL){
        temp = temp->next;
    }

    if(temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head){
    while(head != nullptr){
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL\n";
}


int main(){

    Node* head = NULL;

    insertAtStart(head, 1);
    printList(head);

    insertAtStart(head, 2);
    printList(head);

    insertAtStart(head, 3);
    printList(head);

    insertAtEnd(head, 4);
    printList(head);

    insertAtEnd(head, 5);
    printList(head);

    insertAtPosition(head, 6, 1);
    printList(head);

    return 0;
}