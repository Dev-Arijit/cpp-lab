/*  #include <iostream>
#include <map>
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


bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp])
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
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
    insert(10, 5, tail);
    print(tail);
    insert(20, 5, tail);
    print(tail);
    insert(30, 10, tail);
    print(tail);

    if(detectLoop(tail)){
        cout << "Loop is present" << endl;
    }
    else{
        cout << "Loop is not present" << endl;
    }
    return 0;
}
*/

#include <iostream>
#include <map>
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


bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp])
        {
            cout << "Present on element " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (fast == slow)
        {
            // cout << "Present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* startOfLoop(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;

    }
    return slow;

}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* start = startOfLoop(head);
    if(start == NULL){
        return;
    }
    Node* temp = start;
    while(temp->next != start){
        temp = temp->next;
    }
    temp->next = NULL;
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
    tail->next = head->next;

    if (floydDetectLoop(head))
    {
        cout << "Loop is present" << endl;
    }
    else
    {
        cout << "Loop is not present" << endl;
    }

    cout << "Loop started at " << startOfLoop(head)->data << endl;

    removeLoop(head);

    if (floydDetectLoop(head))
    {
        cout << "Loop is present" << endl;
    }
    else
    {
        cout << "Loop is not present" << endl;
    }


    return 0;
}
