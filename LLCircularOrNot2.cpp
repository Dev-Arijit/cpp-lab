#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory cleared for node with data " << value << endl;
    }
};

void createNode(int val, Node *&tail)
{
    Node *temp = new Node(val);
    temp->next = temp;
    tail = temp;
}

void insert(int val, int after, Node *&tail)
{
    if (tail == NULL)
    {
        Node *temp = new Node(val);
        temp->next = temp;
        tail = temp;
    }
    else
    {
        Node *temp = tail;
        do
        {
            if (temp->data == after)
            {
                Node *newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        } while (temp != tail);
        cout << "Element is not present in the list" << endl;
    }
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

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        Node *temp = tail;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != tail);
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    Node *tail = NULL;
    createNode(5, tail);
    print(tail);
    
 /*   insert(10, 5, tail);
    print(tail);
    insert(20, 5, tail);
    print(tail);
    insert(30, 10, tail);
    print(tail);   */

    if (isCircular(tail))
    {
        cout << "It is a circular linked list" << endl;
    }
    else
    {
        cout << "It is not a circular linked list" << endl;
    }

    return 0;
}
