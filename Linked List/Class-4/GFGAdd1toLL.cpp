class Solution {
  public:
  
    Node* reverseList(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        
        //step 1 - revrse list 
        head = reverseList(head);
        
        //step 2 - add one
        //mujhe plus one karna hai toh mein carry ko hi 1 mann leta hun
        int carry = 1;
        Node* temp = head;
        
        while(temp != NULL){
            int sum = carry + temp->data;
            int digit = sum % 10;
            carry = sum / 10;
            
            temp->data = digit; //update sum
            
            //move to next node 
            //special case -->last node ke liye 
            if(temp -> next == NULL && carry != 0){
                Node* newNode = new Node(carry);
                newNode->next = NULL;
                temp->next= newNode;
                temp = newNode;
            }
            //traverse kar rahe hein toh age toh badhna hii hei 
            temp = temp->next;
        }
        
        //step 3 - again reverse list
        head = reverseList(head);
        
        return head;
    }
};