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

void deldupele(Node* &head){
    Node* curr = head;

    while(curr != nullptr){
       while(curr->next != nullptr && curr->data /*while current ki value is equal to*/ == curr->next->data/*current k next ki value*/){
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
       }
       curr = curr->next;
    }
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

    vector<int> value = {1,2,2,3,4,4,5};

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
    deldupele(head);
    printList(head);

    return 0;

}