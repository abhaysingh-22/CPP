#include <bits/stdc++.h>
using namespace std;

class Node{

    public: 
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList{

    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
};

int main(){

    Node* new_node = new Node(3);
    Node* new_node2 = new Node(5);

    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node2;

    cout << "Doubly Linked List created with head value: " << dll.head->data << endl;
    cout << "Tail value: " << dll.tail->data << endl;

    return 0;
}