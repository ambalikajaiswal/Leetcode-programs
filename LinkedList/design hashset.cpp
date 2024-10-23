Example 1:

Input
["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
[[], [1], [2], [1], [3], [2], [2], [2], [2]]
Output
[null, null, null, true, false, null, true, null, false]

Explanation
MyHashSet myHashSet = new MyHashSet();
myHashSet.add(1);      // set = [1]
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(1); // return True
myHashSet.contains(3); // return False, (not found)
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(2); // return True
myHashSet.remove(2);   // set = [1]
myHashSet.contains(2); // return False, (already removed)

//cpp
class MyHashSet {
public:
    vector<bool>v;
    MyHashSet() {
        v.resize(1000001,false);
    }
    
    void add(int key) {
        v[key]=true;
    }
    
    void remove(int key) {
        v[key]=false;
    }
    
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

class MyHashSet:
    v=[]
    def __init__(self):
        self.hashset=[]

    def add(self, key: int) -> None:
        if not self.contains(key):
            self.hashset.append(key)

    def remove(self, key: int) -> None:
        if self.contains(key):
          self.hashset.remove(key)

    def contains(self, key: int) -> bool:
        return True if key in self.hashset else False
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)

//linkedlist
class MyHashSet {
public:
    ListNode* head;
    MyHashSet() :
        head(new ListNode(-1)){};
    
    
    void add(int key) {
        ListNode* p=head;
        while(p->next!=NULL){
            if(p->next->val==key) return;
            p=p->next;
        }
        p->next=new ListNode(key);
    }
    
    void remove(int key) {
        ListNode*p=head;
        while(p->next!=NULL){
            if(p->next->val==key){
                ListNode*temp=p->next;
                p->next=temp->next;
                delete temp;
                return;
            }
            p=p->next;
        }
    }
    
    bool contains(int key) {
        ListNode* p = head;
        while (p->next != nullptr) {
            if (p->next->val == key) return true;
            p = p->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
