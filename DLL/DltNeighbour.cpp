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
};

void dltNeighbour(Node* head, Node* tail){

    Node* currNode = tail->prev;
    while(currNode != head){
        Node* prevNode = currNode->prev;
        Node* nextNode = currNode->next;

        if(prevNode->data == nextNode->data){
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            delete currNode;
        }

        currNode = prevNode;
    }
}

int main()
{
    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.insertAtStart(40);
    dll.insertAtStart(30);
    dltNeighbour(dll.head, dll.tail);

    cout << "List after deleting neighbours: ";
    Node* current = dll.head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}