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


int getLength(Node* head){

    Node* temp = head;

    int length = 0;

    while(temp != nullptr){
        length++;
        temp = temp -> next;
    }

    return length;
}


Node* moveHeadBYk(Node* head, int k){
    Node* ptr = head;
    while(k-- && ptr){
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2){
    Node* ptr1;
    Node* ptr2;

    int l1 = getLength(head1);
    int l2 = getLength(head2);

    if(l1 > l2){
        int k = l1 - l2;
        ptr1 = moveHeadBYk(head1, k);
        ptr2 = head2;
    }else{
        int k = l2-l1;
        ptr1 = head1;
        ptr2 = moveHeadBYk(head2, k);
    }

    while(ptr1 && ptr2){
        if(ptr1 == ptr2){
            return ptr1;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return nullptr;
}

int main(){

    vector<int> value1 = {1,2,3,4,5};
    vector<int> value2 = {6,7};

    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    for(int val : value1){
        Node* newNode = new Node(val);
        if(!head1){
            head1 = tail1 = newNode;
        }else{
            tail1->next = newNode;
            newNode->prev = tail1;
            tail1 = newNode;
        }
    }

    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    for(int val : value2){
        Node* newNode = new Node(val);
        if(!head2){
            head2 = tail2 = newNode;
        }else{
            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = newNode;
        }
    }

    // Make the last node of head2 point to the node with value 5 in head1
    Node* temp = head1;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    tail2->next = temp;
    temp->prev = tail2;

    Node* intersection = getIntersection(head1, head2);
    cout << (intersection ? "found" : "Not found") << endl;

    return 0;
}