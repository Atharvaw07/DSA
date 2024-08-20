#include <iostream>
using namespace std;

class Node
{

public:
    Node *prev = NULL;
    int data;
    Node *next = NULL;

    // constructor
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

Node* reverse(Node* &head){

    Node* temp=NULL;
    Node* curr= head;
    Node* forward=NULL;

    while (curr!=NULL)
    {
        forward=curr->next;
        curr->next=temp;
        curr->prev=forward;
        temp=curr;
        curr=forward;
    }

    return temp;
    
}

Node *print(Node *head)
{

    if (head == NULL )
    {
        return head;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* node1 = new Node(10);


    Node *head = node1;
    Node *tail=node1;


    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);

     cout << "Original list: ";
    print(head);

    cout<<endl;

    head = reverse(head);
    cout << "Reversed list: ";
    print(head);



    return 0;
}