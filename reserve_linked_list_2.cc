struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m == n) return head;
        
        ListNode *s = head;
        ListNode *end = head;
        for (int i = 1; i < m; i++){
            end = s;
            s = s->next;
        }
        
        ListNode *temp;
        ListNode *cur = s;
        ListNode *pre = NULL;
        int k = m;
        while (k <= n){
            k++;
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        if (m == 1){
            s->next = cur;
            return pre;
        }
        end->next = pre;
        s->next = cur;
        return head;
        
        
        
    }
};
