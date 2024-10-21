/*Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10*/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
         long long unsigned int res=0;
        int n=1000000007;
        while(head!=NULL)
        {
            res=((res<<1)+head->val);
            head=head->next;
        }
        return res;
    }
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int b=0;
        while(temp!=NULL){
            b+=temp->val*pow(2,cnt-1);
            cnt--;
            temp=temp->next;
        }
        return b;
    }
};
