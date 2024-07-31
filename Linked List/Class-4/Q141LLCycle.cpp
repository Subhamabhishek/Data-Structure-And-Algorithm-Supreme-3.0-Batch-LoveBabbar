/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_map<ListNode*, bool>m;
        // ListNode* temp = head;
       
        // while(temp!=NULL){
        //     if(m[temp] == true){
        //         //pehle se hi true h
        //         //cycle present hai
        //         return true;
        //     }
        //     else{
        //         //pehle se true nehi haoo , yaani false hai 
        //         //toh mein visit krra hu ise
        //         m[temp] = true;
        //     }
        //     temp = temp->next;
        // }
        // //agar yahan tak pahunch gaye hoo, iska matlab loop se bahar aa gaye ho 
        // //iska matlab LL poori traverse ho gayi hai
        // //and end mein null milega so no cycle present
        // return false;

//////TO OPTIMIZE SPACE COMPLEXITY WE CAN USE FAST AND SLOW CONCEPT //////
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast ->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
                if(fast == slow)
                    return true;
            }
        }
        return false;
    }
};