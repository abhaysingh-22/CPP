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
        this->next = nullptr;
    }
};

class Stack
{

    Node *head;
    int capacity;
    int size;

public:
    Stack(int c)
    {
        this->capacity = c;
        this->size = 0;
        this->head = nullptr;
    }

    bool isEmpty()
    {
        return this->head == nullptr;
    }

    bool isFull()
    {
        return this->size == this->capacity;
    }

    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1; // or throw an exception
        }
        Node *temp = head;
        int poppedData = temp->data;
        head = head->next;
        delete temp;
        size--;
        return poppedData;
    }

    int getTop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1; // or throw an exception
        }
        return head->data;
    }

    int sizeofStack()
    {
        return this->size;
    }
};


int main(){

    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element: " << stack.getTop() << endl;
    stack.pop();
    cout << "Stack size: " << stack.sizeofStack() << endl;
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}