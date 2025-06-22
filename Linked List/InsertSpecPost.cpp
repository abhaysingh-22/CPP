#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};


void printList(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void InsertAtSpec(Node*& head, int pos, int val){

    Node* newNode = new Node(val);

    if(pos == 1){
        newNode -> next = head;

        if(head != nullptr){
            head -> prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* curr = head;
    for(int i = 1; i < pos-1 && curr != nullptr; i++){
        curr = curr -> next;
    }

    if(curr == nullptr){
        cout << "Invalid Position" << endl;
        delete newNode;
        // return head;
    }

    newNode->next = curr->next;
    if(curr-> next != nullptr){
        curr->next->prev = newNode;
    } 

    curr-> next = newNode;
    newNode -> prev = curr;
}


int main(){

    vector<int> value = {1,2,34,5,6,6,7,13,8,9};

    Node* head = nullptr;
    Node* tail = nullptr;

    for(int val : value){
        Node* newNode = new Node(val);

        if(!head){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    int pos, val;
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    InsertAtSpec(head, pos, val);

    cout << "Your new LL is: ";

    printList(head);
    return 0;
}