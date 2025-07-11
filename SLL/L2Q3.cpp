// given the head of the LL, remove the kth node from the end of the list and return its head 

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

void delKthele(Node* &head, int k){
    
    
    Node* ptr1 = head;
    Node* ptr2 = head;

    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }

    if(ptr2 == NULL){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }

    while(ptr2->next != NULL){
        ptr1 =  ptr1->next;
        ptr2 =  ptr2->next;
    }

    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    delete temp;
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
    delKthele(head, 2);
    printList(head);

    return 0;

}