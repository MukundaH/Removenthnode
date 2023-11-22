/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head->next==NULL){
        head=NULL;
        return head;
    }
    struct ListNode *prev, *end;
    prev = head;
    end = head;
    for(int i=0; i<n+1; i++){
        end = end->next;
        if(end==NULL&&i!=n){
            head = head->next;
            break;
        }
    }
    while(end!=NULL){
        prev = prev->next;
        end = end->next;
    }
    prev->next = prev->next->next;
    return head;
}
