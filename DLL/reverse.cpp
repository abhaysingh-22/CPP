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

    void insertAtStart(int val)
    {

        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void reverseDLL(Node* &head, Node* &tail)
    {
        Node* currPtr = head;

        while(currPtr != NULL){
            Node* nextPtr = currPtr -> next;
            currPtr -> next = currPtr -> prev;
            currPtr -> prev = nextPtr;
            currPtr =  nextPtr;
        }

        // Swap head and tail
        Node* temp = tail;
        tail = head;
        head = temp;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.insertAtStart(40);
    dll.insertAtStart(50);
    
    cout << "Original list: ";
    Node *temp = dll.head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    dll.reverseDLL(dll.head, dll.tail);

    Node *current = dll.head;
    cout << "Reversed Doubly Linked List values: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}