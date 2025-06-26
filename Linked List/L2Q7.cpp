// given head, the head of the linked list determine if the linked list have a cycle in it 

// if slow and fast pointer kahi nhi milte h toh not in cycle 


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

bool detectCircle(Node* &head){  

    if(!head){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }

    return false;
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

    vector<int> value1 = {1,2,3,4,5,6,7,8,9,10};

    Node* head = createList(value1);
    
    bool cycle = detectCircle(head);
    if(cycle){
        cout << "YES";
    }else{
        cout << "NO";
    }
    // printList(head);

    return 0;
}