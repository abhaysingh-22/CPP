// ismai pta nhi kya kiya h if you want see lec 01 LL and 2 hrs and 10 min

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

Node* reversingLL(Node* &head){
    Node* prevptr = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* nextptr = curr->next;
        curr -> next = prevptr;
        prevptr = curr;
        curr = nextptr;
    }    
    Node* newHead = prevptr;
    return newHead;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){

    vector<int> value = {1,2,3,4,5};

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
    reversingLL(head);
    printList(head);

    return 0;

}