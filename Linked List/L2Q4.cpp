// given 2 sorted linked list merge them into a single LL such that the resulting LL is also sorted

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

Node* mergeLL(Node* &head1, Node* &head2){
    
    Node* dummyNode = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyNode;

    while(ptr1 && ptr2){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1){
        ptr3->next = ptr1;
    }else{
        ptr3->next = ptr2;
    }

    return dummyNode->next;
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


    Node* mergedHead = mergeLL(head1, head2);
    printList(mergedHead);

    return 0;

}