class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int>v;
       // vector<int>res;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                v.insert(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else
              j++;
        }
       
        vector<int>res(v.begin(),v.end());
        return res;
    }
};

\\approach 2
class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int>s(a.begin(),a.end());
        unordered_set<int>t(b.begin(),b.end());
        vector<int>v;
        
        for(auto x:s){
            if(t.find(x)!=t.end()){
                v.push_back(x);
            }
        }
       return v;
    }
};


python
  def intersection(self, a: List[int], b: List[int]) -> List[int]:
        s=set(a)
        t=set(b)
        v=[]

        for i in s:
            if i in t:
                v.append(i)
        return v
