class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp;
        ListNode *curr,*res=nullptr;
        int carry = 0,sum;
        while(l1 != nullptr || l2 != nullptr) {
            sum  = carry + (l1?l1->val:0) + (l2?l2->val:0);
            carry = (sum>=10)?1:0;
            sum = sum % 10;
            temp = new ListNode(sum);
            if(res == nullptr)
                res = temp;
            else
                curr->next = temp;
            curr = temp;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        } 
        if (carry > 0)
            temp->next = new ListNode(carry);
        return res;
        
        
    }
};