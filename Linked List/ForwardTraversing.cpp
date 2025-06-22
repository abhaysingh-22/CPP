
// FORWARD TRAVERSING



// #include <bits/stdc++.h>
// using namespace std;

// struct Node{

//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = nullptr;
//         prev = nullptr;
//     }
// };

// void ForwardTraverse(Node* head){

//     Node* curr = head;

//     while(curr != nullptr){
//         cout << curr->data << " ";

//         curr = curr->next;
//     }

//     cout << endl;
// }

// int main(){

//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);

//     head->next = second;
//     second->prev = head;
//     second->next = third;
//     third->prev = second;

//     cout << "Output: ";
//     ForwardTraverse(head);

//     return 0;
// }





// FORWARD AND REVERSE TRAVERSING

/*#include <bits/stdc++.h>
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

void forwardTraverse(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";

        curr = curr->next;
    }

    cout << endl;
}

void reverseTraverse(Node* tail){
    Node* curr = tail;
    while(curr != nullptr){
        cout << curr->data << " ";

        curr = curr->prev;
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

    cout << "forward: ";
    forwardTraverse(head);


    cout << "reverse: ";
    reverseTraverse(tail);

    return 0;
}
*/






// RECURSIVE APPROACH

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

void forwardTraverse(Node* head){
    if(head == nullptr){
        return;
    }

    cout << head->data << " ";

    forwardTraverse(head->next);
}

void reverseTraverse(Node* tail){
    if(tail == nullptr){
        return;
    }

    cout << tail->data << " ";

    reverseTraverse(tail->prev);
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

    cout << "forward: ";
    forwardTraverse(head);

    cout << endl;

    cout << "reverse: ";
    reverseTraverse(tail);

    return 0;
}