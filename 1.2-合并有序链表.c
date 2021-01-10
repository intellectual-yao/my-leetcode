/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *p = l3;                 //pΪ����ָ��
    if(!l1) 
        return l2;
    if(!l2) 
        return l1;
    
    while(l1 && l2)     //��l1,l2������ʱ
    {
        if(l1->val <= l2->val)
        {
            p->next = l1;       //l1����������
            l1 = l1->next;
        }
        else
        {
            p->next = l2;       //l2����������
            l2 = l2->next;
        }
        p = p->next;            //������βָ�����һλ�����´�β����׼��
    }
    if(!l1) 
        p->next = l2;
    if(!l2) 
        p->next = l1;

    return l3->next; 
}
