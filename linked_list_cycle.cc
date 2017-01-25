struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return NULL;
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *tracker = head;
        
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow){
                while (slow != tracker){
                    slow = slow->next;
                    tracker = tracker->next;
                }
                return tracker;
            }
        }
        return NULL;
    }
};
