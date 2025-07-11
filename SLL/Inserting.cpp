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

void InsertAtFirst(Node*& head, int val){

    Node* newNode = new Node(val);

    newNode -> next = head;

    if(head != nullptr){
        head->prev = newNode;
    }

    head = newNode;
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

    InsertAtFirst(head, 30);
    InsertAtFirst(head, 20);
    InsertAtFirst(head, 10);

    printList(head);

    return 0;
}

// Time Complexity: O(1)
// Auxiliary Space: O(1)