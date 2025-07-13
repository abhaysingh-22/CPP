#include <bits/stdc++.h>
using namespace std;

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

    void deleteAtStart(){

        if(head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head -> prev = NULL;
        }
        else {
            tail = NULL; // If the list becomes empty
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
    dll.deleteAtStart();

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