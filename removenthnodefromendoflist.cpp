class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start -> next = head;
        ListNode* fast = start, *slow = start;
        for (int i = 0; i <  n && fast; i++)
            fast = fast -> next;
        while (fast -> next) {
            fast = fast -> next;
            slow = slow -> next;
        }
        slow ->next = slow -> next -> next;
        return start -> next;
    }
};

