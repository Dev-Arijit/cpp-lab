#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }     
};

void insertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node* &tail, int pos, int value)
{
    if (pos == 1)
    {
        insertAtHead(head, value);
        return;
    }

    Node *node = new Node(value);
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, value);
        return;
    }
    node->next = temp->next;
    temp->next = node;
}


bool isCircular(Node *head)
{
    // Write your code here.
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    
    return false;
    
}


void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 12);
    print(head);

    Node *tail = node1;
    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 30);
    print(head);

    insertAtPosition(head, tail, 6, 100);
    print(head);
    
    if(isCircular(head)){
        cout << "It is a circular linked list" << endl;
    }
    else{
        cout << "It is not a circular linked list" << endl;
    }

    return 0;
}
