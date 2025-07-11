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

int getSize(Node* head){

    int count = 0;
    Node* curr = head;

    while(curr != nullptr){
        count++;
        curr = curr -> next;
    }

    return count;
}

int main(){

    vector<int> value = {1,23,43,54,6,67,66,54,3,32,54,67};

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

    int size = getSize(head);
    cout << "Size: " << size << endl;

    return 0;
}