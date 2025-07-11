// imp question and has been asked many times in interviews 
// last question lec 01

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

Node* reverseKLL(Node* &head, int k){
    
    Node* prevptr = NULL;
    Node* currptr = head;

    int counter = 0;
    while(currptr != NULL && counter < k){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    if(currptr != NULL){
        Node* new_head = reverseKLL(currptr, k);
        head -> next = new_head;
    }

    return prevptr;
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
    reverseKLL(head, 2);
    printList(head);

    return 0;

}