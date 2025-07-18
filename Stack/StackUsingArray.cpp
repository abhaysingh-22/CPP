#include <bits/stdc++.h>
using namespace std;

class Stack
{

    // these are private because we don't want to expose or direct allow to the user
    int capacity;
    int top;
    int *arr;

public:
    // default constructor
    Stack(int c)
    {
        this->capacity = c;
        this->top = -1;
        arr = new int[c];
    }

    // push function
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            // moving top index from -1 to 0
            this->top++;
            this->arr[this->top] = data;
        }
    }

    // pop function
    int pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1; // or throw an exception
        }
        else
        {
            // move the top index down note that we are note removing anything we are just removing the access from the stack and printing the just below element of the top element
            return this->arr[this->top--];
        }
    }

    // peek function
    int peek()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return this->arr[this->top];
    }

    // isEmpty function
    bool isEmpty()
    {
        return this->top == -1;
    }

    // size function
    int size()
    {
        return this->top + 1; // top is the index of the last element, so size is top + 1
    }

    // full function
    bool isFull()
    {
        return this->top == this->capacity - 1; // if top is at the last index, stack is full
    }
};

int main()
{

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.size() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl;
    s.push(40);
    cout << "Top element: " << s.peek() << endl;

    return 0;
}