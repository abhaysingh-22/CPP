#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void dequeue()
    {
        if (head == nullptr)
        {
            return;
        }
        else
        {
            Node *oldHead = head;
            Node *newHead = head->next;
            head = newHead;
            if (head == nullptr)
            {
                tail = nullptr;
            }
            oldHead->next = nullptr;
            delete oldHead;
            size--;
        }
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    int front()
    {
        if (head == nullptr)
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.enqueue(50);
    cout << "Size after operations: " << q.getSize() << endl;

    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.dequeue();
    }

    cout << endl;
    return 0;
}