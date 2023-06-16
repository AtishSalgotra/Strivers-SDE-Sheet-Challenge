class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1, *curr2 = l2;
        
        ListNode* ans = NULL, *curr = NULL;
        int carry = 0;
        while (curr1 || curr2 || carry) {
            int sum = carry;
            carry = 0;
            if (curr1) {
                sum += curr1 -> val;
                curr1 = curr1 -> next;
            }
            if (curr2) {
                sum += curr2 -> val;
                curr2 = curr2 -> next;
            }
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            if (!curr)  
                ans = curr = node;
            else {
                curr -> next = node;
                curr = curr -> next;
            }   
        }
        return ans;
    }
};

