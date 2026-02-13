#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int value)
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

void remDup(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = head->next;
    Node *prev = head;

    while (curr != NULL)
    {
        if (prev->data == curr->data)
        {
            prev->next = curr->next;
            Node* nodeToDelete = curr;
            nodeToDelete->next = NULL;
            delete nodeToDelete;
            curr = prev->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

void remDupMap(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (visited[curr->data])
        {
            prev->next = curr->next;
            Node* nodeToDelete = curr;
            nodeToDelete->next = NULL;
            delete nodeToDelete;
            curr = prev->next;
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
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
    // print(head);

    Node *tail = node1;
    insertAtTail(tail, 40);
    insertAtTail(tail, 30);
    // print(head);

    insertAtTail(tail, 20);
    // print(head);
    insertAtTail(tail, 30);
    insertAtTail(tail, 10);
    // print(head);
    insertAtTail(tail, 30);
    // print(head);
    // print(head);
    // print(head);
    insertAtTail(tail, 40);
    insertAtTail(tail, 20);
    // print(head);
    insertAtTail(tail, 30);
    print(head);

    // remDup(head);
    remDupMap(head);
    print(head);

    return 0;
}
