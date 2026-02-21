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

void insertionAtNthPosition(Node* &head, int position, int key){
    
    Node* newNode = new Node(key);
    

    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    if(head == NULL){
        head = newNode;
        return;
    }

    while(count < position-1 && temp != NULL){
        temp = temp->next;
        count++;
    }

    if(temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteLastNode(Node* &head){
    if(head == nullptr) return;
    
    if(head->next == nullptr){
		delete head;
        head = nullptr;
        return;
	}

    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;

    temp->next = nullptr;
}

void deleteAtStart(Node* &head){
    if(head == nullptr) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtNthNode(Node* &head, int position){
    if(head == nullptr) return;

    if(position == 1){
        deleteAtStart(head);
        return;
    }

    Node* temp = head;

    while(position-1 > 1 && temp != nullptr){
        position--;
        temp = temp->next;
    }

    if(temp->next == nullptr || temp == nullptr) return;

    Node* deleteNode = temp->next;

    temp->next = temp->next->next;
    delete deleteNode;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL\n";

}



int main(){

    Node* head = nullptr;

    insertionAtEnd(head,1);
    print(head);

    insertionAtEnd(head, 2);
    print(head);

    insertionAtStart(head, 3);
    print(head);

    insertionAtNthPosition(head, 2, 5);
    print(head);

    insertionAtNthPosition(head, 5, 6);
    print(head);

    deleteLastNode(head);
    print(head);

    deleteAtStart(head);
    print(head);

    deleteAtNthNode(head, 3);
    print(head);


    return 0;
}