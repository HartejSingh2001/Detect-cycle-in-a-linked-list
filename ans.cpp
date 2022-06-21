class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        
        if(head==NULL)
        {
            return false;
        }
        ListNode *p=head,*q=head;
        
        while(q->next!=NULL && q!=NULL && p!=NULL)
        {
           p=p->next;
            q=q->next->next;
            if(p==q)
            {
                return true;
            }
        }
        return false;
    }
};
