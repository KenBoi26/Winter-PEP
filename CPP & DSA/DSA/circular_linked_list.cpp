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

void deleteFirstNode(Node* &head){
    if(head == nullptr) return;

    if(head == head->next){
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = temp->next->next;
    delete head;
    head = temp->next;
}

void deleteLastNode(Node* &head){
    if(head == nullptr) return;

    Node* temp = head;

    if(head == temp->next){
        delete temp;
        head = nullptr;
        return;
    }

    while(temp->next->next != head){
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = head;
    delete toDelete;
}

void deleteAtNthPosition(Node* &head, int position){
    if(head == nullptr) return;

    if(position == 1){
        deleteFirstNode(head);
        return;
    }

    Node* temp = head;
    while(position-1 > 1 && temp->next != head){
        temp = temp->next;
        position--;
    }

    if(temp->next == head && position-1 <= 1){
        return;
    }

    if(temp->next == head){
        deleteLastNode(head);
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void printList(Node* head){
    if(head == nullptr){
        cout << "NULL" << endl;
        return;
    }
    
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

    // deleteLastNode(head);
    // printList(head);

    // deleteFirstNode(head);
    // printList(head);

    deleteAtNthPosition(head, 4);
    printList(head);


    return 0;
}