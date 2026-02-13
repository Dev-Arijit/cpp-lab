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
};

void createNode(int val, Node *&head)
{
    Node *temp = new Node(val);
    head = temp;
}

void insertAtBeg(int val, Node *&head)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtEnd(int val, Node *&head)
{
    Node *temp = new Node(val);
    Node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void insertAtPos(int val, int pos, Node *&head)
{
    if (pos == 1)
    {
        insertAtBeg(val, head);
        return;
    }
    Node *temp = new Node(val);
    Node *curr = head;
    int count = 1;
    while (count < pos - 1 && curr->next != NULL)
    {
        curr = curr->next;
        count++;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void deletepos(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            if (curr == NULL)
            {
                cout << "Invalid position" << endl;
                return;
            }
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteVal(int val, Node *&head)
{
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
            if (curr->data == val)
            {
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
                return;
            }
        }
        cout << "Invalid value" << endl;
    }
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    createNode(5, head);
    display(head);
    insertAtBeg(10, head);
    display(head);
    insertAtEnd(8, head);
    display(head);
    insertAtPos(1, 2, head);
    display(head);
    insertAtPos(15, 2, head);
    display(head);

    deletepos(9, head);
    display(head);
    deleteVal(50, head);
    display(head);

    return 0;
}
