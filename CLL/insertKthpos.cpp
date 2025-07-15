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

    void insertAtKthPosition(int val, int k)
    {
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        int count = 1;
        Node* temp = head;
        while(count < k - 1 && temp->next != head){
            temp = temp->next;
            count++;
        }
        new_node->next = temp -> next;
        temp->next = new_node;

        if(k == 1){
            head = new_node;
        }
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
    cll.insertAtKthPosition(8, 1);
    cll.Display();

    return 0;
}