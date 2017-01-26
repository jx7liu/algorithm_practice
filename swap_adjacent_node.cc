struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode * holder = head->next;
        head->next = swapPairs(holder->next);
        holder->next = head;
        //head->next
        return holder;
        
    }
};
