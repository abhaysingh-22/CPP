#include <bits/stdc++.h>
using namespace std;

// delete at random postion in the DLL

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

    void deleteAtKth(int k)
    {
        if(head == NULL || k <= 0) {
            cout << "Invalid position or empty list." << endl;
            return;
        }
        Node* temp = head;
        int count = 1;
        while (temp != NULL && count < k)
        {
            temp = temp->next;
            count++;
        }

        if(temp == NULL){
            cout << "Position exceeds the length of the list." << endl;
            return;
        }

        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;

        delete temp;
    }
};

int main()
{

    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.insertAtStart(40);
    dll.deleteAtKth(3);

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