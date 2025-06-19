#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void InsertAtEnd(Node*& head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}


void printList(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main(){

    Node* head = nullptr;

    InsertAtEnd(head, 10);
    InsertAtEnd(head, 20);
    InsertAtEnd(head, 30);

    printList(head);

    return 0;
}