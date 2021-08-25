int countNodesinLoop(struct Node *head)
{
    // Code here
    int count=0;
    Node *fast,*slow;
    fast=slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            count++;
            slow=head;
            if(fast==slow)
            {
                while(fast->next!=slow)
                {
                    fast=fast->next;
                    count++;
                }
            }
            else
            {
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                Node *start;
                fast=fast->next;
                start=fast;
                while(start->next!=fast)
                {
                    start=start->next;
                    count++;
                }
            }
            return count;
        }
        
    }
    return count;
}
