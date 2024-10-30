class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
         return NULL;
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        k=k%n;
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};

//approach 2
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0)
          return head;
        int cnt=1;
        ListNode*tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            cnt++;
        }
        if(k>cnt){
            k=k%cnt;
            if(k==0)
             return head;
        }

        if(k<=cnt){
            k=cnt-k;
            if(k==0){
                return head;
            }
        }
        int i=1;
        ListNode* curr=head;
        while(i<k && curr!=NULL){
            curr=curr->next;
            i++;
        }

        ListNode*temp=curr->next;
        curr->next=NULL;
        tail->next=head;
        return temp;
    }
};


class Solution {
public:
    int get(ListNode*head)
    {  int cnt=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)return head;
        
        //ListNode *temp=head;
        ListNode*cur=head;
        int size=get(head);
        if(k>=size)
        {
              k = k%size;
        }
       
       cur=head;
    //take remainder when k is greater than length
    k=k%size;
    //we need to iterate k times from head node to reach kth node from right end.
    k=size-k;
    //int index=1;
        
        
       
    int index=1;
    //iterate till we reach the kth node from left side(from head node)
    while(index!=k && cur!=nullptr)
    {
        ++index;
        cur=cur->next;
    }
	
        //if(cur==NULL)
            //return head;
        
        ListNode *kth=cur;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
       cur->next=head;
        
        head=kth->next;
        kth->next=NULL;
        return head;
    }
};
