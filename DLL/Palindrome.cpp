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

bool isPalindrome(Node* head, Node* tail){

    while(head != tail && head->prev != tail){
        if(head -> data != tail -> data){
            return false;
        }

        head = head -> next;
        tail = tail -> prev;
    }
    return true;
}

int main()
{
    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.insertAtStart(40);
    dll.insertAtStart(50);

    if(isPalindrome(dll.head, dll.tail)){
        cout << "The list is a palindrome." << endl;
    } else {
        cout << "The list is not a palindrome." << endl;
    }

    return 0;
}