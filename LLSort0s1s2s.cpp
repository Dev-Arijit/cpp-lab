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

void sort012(Node* &head){
    if(head == NULL){
        return;
    }
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;

    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
}

void sort2(Node *&head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            insertAtTail(zeroTail,0);
        }
        else if(temp->data == 1){
            insertAtTail(oneTail,1);
        }
        else if(temp->data == 2){
            insertAtTail(twoTail,2);
        }
        temp = temp->next;
    }

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;

    oneHead->next = NULL;
    zeroHead->next = NULL;
    twoHead->next = NULL;

    delete oneHead;
    delete zeroHead;
    delete twoHead;

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
    Node *node1 = new Node(1);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtHead(head, 1);
    print(head);

    Node *tail = node1;
    insertAtTail(tail, 2);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtPosition(head, tail, 6, 0);
    insertAtTail(tail, 2);
    print(head);
    // sort012(head);
    sort2(head);
    print(head);

    

    return 0;
}
