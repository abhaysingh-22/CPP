#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CLL
{

public:
    Node *head;

    CLL()
    {
        head = NULL;
    }

    void Display()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        do
        {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }

    void delStart()
    {
        if(head == NULL){
            return;
        }

        Node* temp = head;
        Node* tail = head;

        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = head -> next;
        free(temp);
        head = tail->next;
    }
};

int main()
{

    CLL cll;
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.insertAtEnd(6);
    cll.insertAtEnd(7);
    cll.delStart();
    cll.Display();

    return 0;
}