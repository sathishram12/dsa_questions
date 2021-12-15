#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

ListNode* InsertatBegin(ListNode* head, int data){
    ListNode *temp = new ListNode(data);
    temp->next = head;
    return temp;
}
    

ListNode* InsertatEnd(ListNode* head, int data){
    if (head == NULL)
       return new ListNode(data);
    else {
        ListNode  *temp = head;
        while (temp->next != NULL){
            temp = temp -> next;
        }
        temp->next = new ListNode(data);
    }
    return head;
}

ListNode* InsertatIndex(ListNode* head, int data, int index){
    int cnt = 1;
    ListNode  *temp = head;
    while ( cnt < index){
        temp = temp -> next;
        cnt++;
    }
    ListNode *temp1 = new ListNode(data);
    temp1->next = temp->next;
    temp->next = temp1;   
    return head;
}

ListNode* deleteNode(ListNode* head, int index){
    ListNode* temp = head;
    if (head == NULL)
        return head;
    else if ( index == 0) {
        head = temp->next;
        delete temp;
        return  head;
    } else {
        for(int cnt = 0; cnt < index-1; cnt++)
            temp = temp->next;
        ListNode* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }
    return head;
}

ListNode* solve(vector<vector<int> > &A) {
    ListNode *head = NULL;
    ListNode *track = NULL;
    int length = 0;

    for(int i = 0 ; i < A.size(); i++) {
        
        //Insert At Begin
        if (A[i][0] == 0) {
            head = InsertatBegin(head, A[i][1]);
            length++;
        //Insert At End
        } else if(A[i][0] == 1) {
            head = InsertatEnd(head,A[i][1]);
            length++;
        //Insert At particular Index
        } else if(A[i][0] == 2){
            if (head == NULL || A[i][2] == 0)
                head = InsertatBegin(head, A[i][1]);
            else if (A[i][2] == length)
                head = InsertatEnd(head, A[i][1]);
            else if (A[i][2] > length)
                continue;
            else {
                head = InsertatIndex(head, A[i][1], A[i][2]);
            }
            length++;
        //Delete at particular Index
        } else {
            if (length < A[i][1]+1)
                continue;
            head = deleteNode(head, A[i][1]);
            length--;
        }
    }
    return head;
}
