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

Node* delLast(Node* head){

    if(head == nullptr){
        return nullptr;
    }
    if(head -> next == nullptr){
        delete head;
        return nullptr;
    }
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr -> next;
    }
    curr->prev->next = nullptr;
    delete curr;
    return head;
}

void printList(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr->next;
    }
    cout << endl;
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

    head = delLast(head);

    cout << "Your new LL is: ";

    printList(head);
    return 0;
}