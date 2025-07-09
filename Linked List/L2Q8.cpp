// check palindrome

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node* &head){
    if (head == nullptr || head->next == nullptr) return true;
    
    Node* middle = findMiddle(head);
    Node* secondHalf = reverseList(middle->next);
    
    Node* firstHalf = head;
    while (secondHalf != nullptr) {
        if (firstHalf->data != secondHalf->data) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    
    return true;
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

    vector<int> value1 = {1,2,3,2,1};

    Node* head = createList(value1);
    
    bool palindrome = isPalindrome(head);
    if(palindrome){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}