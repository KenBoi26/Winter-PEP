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

int countEven(Node* head){
    if(head == nullptr) return 0;

    int count = 0;

    while(head != nullptr){
        if(head->data % 2 == 0){
            count++;
        }
        
        head = head->next;
    }

    return count;
}

int main(){

    Node* head = nullptr;

    insertionAtEnd(head,1);

    insertionAtEnd(head, 2);

    insertionAtStart(head, 3);

    cout << countEven(head);

    return 0;
}