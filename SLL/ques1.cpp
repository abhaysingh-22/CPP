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

void delAltele(Node* &head){
    Node* curr = head;
    while(curr != nullptr /*for even number of elements*/ && curr->next != nullptr /*for odd number of elements*/){           
        Node* temp = curr->next;
        curr->next = temp->next;
        if(temp->next != nullptr) {
            temp->next->prev = curr;
        }
        delete temp;
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
    delAltele(head);
    printList(head);

    return 0;

}