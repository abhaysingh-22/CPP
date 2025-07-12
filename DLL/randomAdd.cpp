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

    void insertAtKth(int val, int k)
    {
        Node *new_node = new Node(val);

        // Handle insertion at head (k == 1) or empty list
        if (k == 1 || head == NULL)
        {
            new_node->next = head;
            if (head != NULL)
            {
                head->prev = new_node;
            }
            head = new_node;
            if (tail == NULL)
            {
                tail = new_node;
            }
            return;
        }

        int count = 1;
        Node *temp = head;

        while (temp != NULL && count < k)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            // Insert at end
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        else
        {
            // Insert in middle
            new_node->next = temp;
            new_node->prev = temp->prev;
            temp->prev->next = new_node;
            temp->prev = new_node;
        }
    }
};

int main()
{

    DoublyLinkedList dll;
    dll.insertAtKth(10, 1);
    dll.insertAtKth(20, 3);
    dll.insertAtKth(30, 2);

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