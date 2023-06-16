class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode* curr1 = list1, *curr2 = list2, *ans = NULL, *temp;
        if (curr1 -> val > curr2 -> val) swap(curr1, curr2);
        ans = curr1;
        while (curr1 && curr2) {
            ListNode* temp = ans;
            while (curr1 && curr2 && curr1 -> val <= curr2 -> val) {
                temp = curr1;
                curr1 = curr1 -> next;
            }
            temp -> next = curr2;
            swap(curr1, curr2);
        }
        return ans;
    }
};

