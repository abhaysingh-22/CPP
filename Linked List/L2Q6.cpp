// find the middle element of the given linked list 

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

Node* middleElement(Node* &head){  

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


Node* createList(const vector<int>& values) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int val : values){
        Node* newNode = new Node(val);
        if(!head){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    return head;
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

    vector<int> value1 = {1,2,3,4,5,6};

    Node* head = createList(value1);
    
    Node* middle = middleElement(head);
    cout << "Middle element: " << middle->data << endl;
    // printList(head);

    return 0;
}