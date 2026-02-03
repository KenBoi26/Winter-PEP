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

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

}


int main(){

    Node* head = nullptr;

    insertionAtEnd(head,1);
    print(head);

    insertionAtEnd(head, 2);
    print(head);

    insertionAtStart(head, 0);
    print(head);


    return 0;
}