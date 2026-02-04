#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = this;
        }
};

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* start = head;

    newNode->next = head;
    head = newNode;

    Node* temp = head->next;

    while(temp->next != head->next){
        temp = temp->next;
    }

    temp->next = head;

}

void printList(Node* head){
    Node* start = head;

    while(head->next != start){
        cout << head->data << "->";
        head = head->next;
    }

    cout << head->data << "->NULL\n";
}


int main(){
    Node* head = nullptr;

    insertAtEnd(head, 1);
    printList(head);

    insertAtStart(head, 2);
    printList(head);

    insertAtEnd(head, 3);
    printList(head);

    insertAtStart(head, 5);
    printList(head);


    return 0;
}