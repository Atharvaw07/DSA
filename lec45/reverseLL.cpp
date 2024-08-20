#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertNode(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

Node* reverse(Node *head){

    if (head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while (curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
 

    


return prev;
    
}

void print(Node* &head){
   if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;

    insertNode(head,20);

    insertNode(head,30);
    insertNode(head,40);
    insertNode(head,50);
    insertNode(head,60);
    insertNode(head,70);

    cout << "Original list: ";
    print(head);

    head = reverse(head);
    cout << "Reversed list: ";
    print(head);






return 0;

}           