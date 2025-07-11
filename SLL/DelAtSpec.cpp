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

void deleteAtPost(Node*& head, int pos){
    if(head == nullptr){
        cout << "Invalid positon" << endl;
        return;
    }

    Node* curr = head;

    if(pos == 1){
        head = head->next;
        if(head){
            head -> prev = nullptr;
        }
        delete curr;
        return;
    }

    for(int i = 1; curr != nullptr && i < pos; i++){
        curr = curr->next;
    }

    if(curr == nullptr){
        cout << "position is out of range" << endl;
        return ;
    }

    if(curr -> prev){
        curr -> prev -> next = curr -> next;
    }

    if(curr -> next){
        curr -> next -> prev = curr -> prev;
    }

    delete curr;
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

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    deleteAtPost(head, pos);

    cout << "Your new LL is: ";

    printList(head);
    return 0;
}