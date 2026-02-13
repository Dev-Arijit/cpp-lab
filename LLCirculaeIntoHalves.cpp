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

void halves(Node* &head,Node *&head1,Node *&head2){
    Node* temp = head;
    int count = 1;
    while(temp->next != head){
        temp = temp->next;
        count++;
    }
    temp = head;
    head1 = head;
    int traverse = 1;
    while(traverse < (count+1)/2){
        temp = temp->next;
        traverse++;
    }
    Node* after = temp->next;
    temp->next = head1;
    head2 = after;
    while(after->next != head){
        after = after->next;
    }
    after->next = head2;

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
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    createNode(5, tail);
    print(tail);
    insert(10, 5, tail);
    print(tail);
    insert(20, 5, tail);
    print(tail);
    insert(30, 10, tail);
    insert(30, 10, tail);
    print(tail);
    halves(tail, tail1, tail2);

    print(tail1);
    print(tail2);

    


    return 0;
}
