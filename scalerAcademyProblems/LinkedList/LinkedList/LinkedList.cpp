#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};
Node *head = NULL;

void insert_node(int position, int value) {
    // @params position, integer
    // @params value, integer
    Node *newNode = new Node (value);
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int cnt = 1; temp != NULL && cnt < position -1; cnt++)
        temp = temp->next;
    if (temp == NULL)
        return;
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_node(int position) {
    // @params position, integer
    if (head == NULL)
        return;
    Node *temp  = head;
    if (position == 1) {
        head = head->next;
        delete temp;
        return;
    }
    for (int cnt = 1; temp != NULL && cnt < position -1; cnt++)
        temp = temp->next;
    if (temp == NULL ||  temp->next == NULL)
        return;
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
    return;
}


void print_ll() {
    // Output each element followed by a space
    if (head == NULL)
        return;
    
    Node *temp  = head;
    while(temp->next != NULL){
        cout<<temp->data<<' ';
        temp = temp->next;
    }
    cout<<temp->data;
    return;
}
