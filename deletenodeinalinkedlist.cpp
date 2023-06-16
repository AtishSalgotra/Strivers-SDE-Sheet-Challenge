class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        while (curr -> next -> next) {
            swap(curr -> val, curr -> next -> val);
            curr = curr -> next;
        }
        swap(curr -> val, curr -> next -> val);
        curr -> next = NULL;
    }
};

