#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* delHead(Node* head){           //here we are writing Node because bcoz we want to declare the new head i.e we have to update the LL accordingly after deleting the first element

    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    head = head-> next;

    if(head != nullptr){
        head -> prev = nullptr;
    }

    delete temp;
    return head;
}

void printList(Node* head){
    while(head != nullptr){
        cout << head -> data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    vector<int> value = {1,2,3,4,5,6,7,8,9,10};

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

    head = delHead(head);

    cout << "Yours new LL is: ";

    printList(head);
    return 0;
}