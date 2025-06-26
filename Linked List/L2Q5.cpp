// now given k sorted linked list merge them into a single LL such that the resulting LL is also sorted

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

Node* mergeKlinkedList(vector<Node*>& lists){

    if(lists.size() == 0) return NULL;

    while(lists.size() > 1){
        Node* headofMerge = mergeLL(lists[0], lists[1]);
        lists.push_back(headofMerge);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }

    return lists[0];
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

    vector<int> value1 = {1,4,7};
    vector<int> value2 = {2,5,8};
    vector<int> value3 = {3,6,9};

    Node* head1 = createList(value1);
    Node* head2 = createList(value2);
    Node* head3 = createList(value3);

    vector<Node*> lists = {head1, head2, head3};
    Node* mergedHead = mergeKlinkedList(lists);
    printList(mergedHead);

    return 0;
}