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
        createNode(val,tail);
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

void deleteNode(int val, Node *&tail)
{
    if (tail == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(prev == curr){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
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
    insert(10, 5, tail);
    print(tail);
    insert(20, 5, tail);
    print(tail);
    insert(30, 10, tail);
    print(tail);

    deleteNode(30, tail);
    print(tail);
    cout << "tail " << tail->data << endl;
    deleteNode(5,tail);
    print(tail);
    cout << "tail " << tail->data << endl;
    deleteNode(10,tail);
    print(tail);
    cout << "tail " << tail->data << endl;
    cout << "tail " << tail->next->data << endl;
    deleteNode(20,tail);
    print(tail);
    // cout << "tail " << tail->data << endl;


    return 0;
}
