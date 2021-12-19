#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};
ListNode* create(int a[],int n);
ListNode* sort(struct ListNode* head);
void output(ListNode* head);
ListNode* insert(ListNode* head,int n);
ListNode* remove(ListNode* head,int n);

int main(){
	int a[10000];
	int n,ins,rm;
	cin>>n>>ins>>rm;
	for(int i = 0;i<n;i++){
		cin>>a[i]; 
	}
	ListNode* list = create(a,n);
	output(list);
	list = sort(list);
	output(list);
	list = insert(list,ins);
	output(list);
	list = remove(list,rm);
	output(list);
	return 0;
}

ListNode* create(int a[],int n){
		//TODO:填写创建链表的函数
	ListNode *head = new ListNode;
    head->val = -1;
    head->next = NULL;
    ListNode *pre = head;
    for (int i = 0; i < n; i ++)
    {
        ListNode *np = new ListNode;
        np->val = a[i];
        pre->next = np;
        np->next = NULL;
        pre = np;
    }
    return head;
}
ListNode* sort(struct ListNode* head){
		//TODO：填写链表排序的函数
	ListNode *p, *nxt;
	int n = 0;
	p = head->next;
	while(p != NULL)
	{
	    n ++;
	    p = p->next;
	}
	// p move i times
	for (int i = n-1; i > 0; i --)
	{
	    p = head->next;
	    nxt = p->next;
	    bool sp = false;
	    for (int j = 0; j < i; j ++)
	    {
	        if (p->val > nxt->val)
	        {
	            sp = true;
	            swap(p->val, nxt->val);
	        }
	        p = nxt;
	        nxt = p->next;
	    }
	    if (!sp) break;
	}
	
    return head;
}
void output(ListNode* head){
		//TODO：填写输出每个节点值的函数
	ListNode *p = head->next;
	while (p != NULL)
	{
	    cout << p->val << endl;
	    p = p->next;
	}
}
ListNode* insert(ListNode* head,int n){
		//TODO：填写向有序链表插入值的函数
	ListNode *p = head, *nxt = head->next;
    while (nxt != NULL)
    {
        if (nxt->val >= n) break;
        p = nxt;
        nxt = p->next;
    }
    
    ListNode *np = new ListNode;
    np->val = n;
    
    np->next = nxt;
    p->next = np;
    
    return head;
}
ListNode* remove(ListNode* head,int n){
		//TODO:填写删除链表中指定值的函数
	ListNode *p = head->next, *pre = head;
    while (p != NULL)
    {
        if (p->val == n)
        {
            pre->next = p->next;
            delete p;
            p = NULL;
            break;
        }
        if (p->val > n) break;
        pre = p;
        p = p->next;
    }
    return head;
}