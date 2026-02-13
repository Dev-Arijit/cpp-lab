class Solution {
  private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* next = NULL;
        Node* prev = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(Node* &head, Node *&tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
    Node* add(Node* first, Node* second){
        int carry = 0;
        Node* addHead = NULL;
        Node* addTail = NULL;
        while(first != NULL || second != NULL || carry != 0){
            int val1 = 0;
            if(first != NULL){
                val1 = first->data;
            }
            int val2 = 0;
            if(second != NULL){
                val2 = second->data;
            }
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            insertAtTail(addHead,addTail,digit);
            
            carry = sum/10;
            
            if(first != NULL){
                first = first->next;
            }
            if(second != NULL){
                second = second->next;
            }
        }
        return addHead;
    }
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        num1 = reverse(num1);
        num2 = reverse(num2);
        Node* ans = add(num1, num2);
        ans = reverse(ans);
        
        while(ans->data == 0 && ans->next != NULL){
            Node* temp = ans;
            delete temp;
            ans = ans->next;
        }
        return ans;
    }
};