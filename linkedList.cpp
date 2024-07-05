// Array to LL
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Traversal
Node *ArrayToLinkedList(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node*temp = head;
    while(head!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* InsertElementBeforeValue(Node* head, int el, int val){
    
}


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* temp = list1;
        while(temp->next!=NULL){
            arr.push_back(temp->val);
        }
        ListNode* temp1= list2;
        while(temp1!=NULL){
            arr.push_back(temp1->val);
        }

        sort(arr.begin(), arr.end());
        //array to LL
        ListNode* head = new ListNode(arr[0]);
        ListNode* mover=head;

        for(int i=1;i<arr.size();i++){
            ListNode* newNode = new ListNode(arr[i]);
            mover->next=newNode;
            mover=newNode;
        }
        return head;

        
    }

int main()
{
    vector<int> arr = {11, 9, 7, 4};
    Node *head = ArrayToLinkedList(arr);

    head = InsertNode(head,5,100);
    print(head);    
}