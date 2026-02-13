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

Node* reverseK(Node *head, int k){
    if(head == NULL){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* after = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        count++;
    }

    if(after != NULL){
        head->next = reverseK(after,k);
    }

    return prev;
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

    head = reverseK(head,3);
    print(head);

    
    return 0;
}
