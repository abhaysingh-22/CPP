#include <bits/stdc++.h>
using namespace std;

// delete element at the end of the DLL

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{

public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int val){

        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
    }

    void deleteAtEnd(){

        if(head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail -> next = NULL;
        }
        else {
            head = NULL; // If the list becomes empty
        }
        delete temp;
    }
};

int main()
{

    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.deleteAtEnd();

    Node *current = dll.head;
    cout << "Doubly Linked List values: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}