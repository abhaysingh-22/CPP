#include <iostream>
using namespace std;
#include <vector>

class Queue
{
    int front;
    int back;
    vector<int> arr;

public:
    Queue()
    {
        this->front = -1;
        this->back = -1;
    }

    void enqueue(int data)
    {
        if (isEmpty())
        {
            front = 0;
            back = 0;
        }
        else
        {
            back++;
        }
        arr.push_back(data);
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        front++;

        if (front > back)
        {
            // Reset queue when it becomes empty
            front = -1;
            back = -1;
            arr.clear();
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return front == -1;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue(); // Dequeues 10
    q.enqueue(50);

    while (!q.isEmpty())
    {
        cout << q.getFront() << " ";
        q.dequeue();
    }
    cout << endl;
    return 0;
}