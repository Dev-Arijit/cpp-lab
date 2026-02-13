#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

void insertAtHead(Node* &head,Node* &tail, int d)
{
    if(head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;  
    }
    
}    

void deleteHead(Node* &head,int pos){
    if(head == NULL){
        cout << "The linked list is already empty " << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

void deleteTail(Node* tail){
    if(tail== NULL){
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    temp->prev = NULL;
    delete temp; 
}

void insertInPosition(Node* &head,Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }
    else{
        Node* temp = head;
        int cnt = 1;
        while(cnt < pos-1){
            temp = temp -> next;
            cnt++;
        }

        if(temp->next == NULL){
            insertAtTail(head,tail,d);
            return;
        }
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        nodeToInsert->prev = temp;
        temp->next = nodeToInsert;
        
    }
}
int main(int argc, char const *argv[])
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << length(head) << endl;

    insertAtHead(head,tail,15);
    print(head);

    insertAtHead(head,tail,20);
    print(head);

    insertAtHead(head,tail,25);
    print(head);

    insertAtTail(head,tail,5);
    print(head);

    insertAtTail(head,tail,8);
    print(head);
    cout <<"Head = " << head->data << endl;
    cout <<"Tail = " << tail->data << endl;

    insertInPosition(head,tail,6,6);
    print(head);
    cout <<"Head = " << head->data << endl;
    cout <<"Tail = " << tail->data << endl;

    

    return 0;
}
