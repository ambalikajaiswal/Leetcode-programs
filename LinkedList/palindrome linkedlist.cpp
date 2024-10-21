Example 1:


Input: head = [1,2,2,1]
Output: true

//approach 1 using vector list:
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int l=0,r=n-1;
        while(l<=r){
            if(v[l]!=v[r]){
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;

    }
};

//approach 2 using stack:
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> stack;
        ListNode* curr = head;
        while (curr) {
            stack.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr && curr->val == stack.top()) {
            stack.pop();
            curr = curr->next;
        }
        return curr == nullptr;
    
    }
};
//approach o(1):
class Solution {
public:
    ListNode* revrse(ListNode * head){ // code to reverse linke dlist
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* forr = temp->next;
            temp->next=prev;
            prev=temp;
            temp=forr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) { //run two pointers once fast reches end slow will come to middle.
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev= revrse(slow); //reverse the list after the slow i.e from middle to end 
        while(rev!=NULL){
            if(rev->val!=head->val) //compare the both
              return false;
              head=head->next;
              rev=rev->next;
        }
        return true;
    }
};
