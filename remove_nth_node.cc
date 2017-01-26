struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = new ListNode(0);
        p->next = head;
        remove(p, n);
        return p->next;
  }
  
  void remove(ListNode* head, int & n){
      if (!head) return;
      remove(head->next, n);
      n--;
      if (n == -1){
          head->next = head->next->next;
      }
      return;
  }

};
