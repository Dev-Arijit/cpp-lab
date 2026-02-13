#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        if (this->prev != NULL)
        {
            delete prev;
            this->prev = NULL;
        }

        cout << "Memory is free for the node with data " << val << endl;
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

void createNode(int val, Node *&head)
{
    Node *temp = new Node(val);
    head = temp;
}

void insertAtBeg(int val, Node *&head)
{
    if (head == NULL)
    {
        Node *temp = new Node(val);
        head = temp;
    }
    else
    {
        Node *temp = new Node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtEnd(int val, Node *&head)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
}

void insert(int val, int pos, Node *&head)
{
    if (pos == 1)
    {
        insertAtBeg(val, head);
    }
    else
    {
        Node *temp = new Node(val);
        Node *curr = head;
        int count = 1;
        while (count < pos - 1)
        {
            if (curr == NULL || curr->next == NULL)
            {
                cout << "Invalid position" << endl;
                return;
            }
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            insertAtEnd(val, head);
            return;
        }
        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
}

void deleteBeg(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else if(head->next == NULL){
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
}

void deleteEnd(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else if(head->next == NULL){
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
}

void deleteNodePos(int pos, Node *&head)
{
    if (pos == 1)
    {
        deleteBeg(head);
    }
    else
    {
        Node *curr = head;
        Node *before = NULL;
        int count = 1;
        while (count < pos)
        {
            before = curr;
            curr = curr->next;
            count++;
        }
        if (curr == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (curr->next == NULL)
        {
            deleteEnd(head);
            return;
        }
        before->next = curr->next;
        curr->next->prev = before;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

void deleteNodeVal(int val, Node *&head)
{
    if (head->data == val)
    {
        deleteBeg(head);
    }
    else
    {
        Node *curr = head;
        Node *before = NULL;
        while (curr->next != NULL)
        {
            before = curr;
            curr = curr->next;
            if (curr->data == val)
            {
                if (curr->next == NULL)
                {
                    deleteEnd(head);
                    return;
                }
                before->next = curr->next;
                curr->next->prev = before;
                curr->next = NULL;
                curr->prev = NULL;
                delete curr;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    createNode(5, head);
    print(head);
    insert(10, 2, head);
    print(head);
    insert(20, 1, head);
    print(head);
    insert(50, 3, head);
    print(head);

    deleteNodePos(1, head);
    print(head);
    deleteNodeVal(50, head);
    print(head);
    deleteNodeVal(10, head);
    print(head);
    deleteNodeVal(5, head);
    print(head);

    return 0;
}
