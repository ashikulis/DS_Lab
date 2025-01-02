#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
    Node(int value){
        data= value;
        next= nullptr;
    }
};

void insertNode(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void display(Node* head)
{
    while(head !=nullptr)
    {
        cout<< head->data<<" ->";
        head = head->next;
    
    }
    cout<<"Ball"<< endl;
}

int main ()
{
    Node* head = nullptr;
    insertNode(head,10);
    insertNode(head,20);
    insertNode(head,30);
    
    cout<<"Linked List: ";
    display(head);
    return 0;
}
