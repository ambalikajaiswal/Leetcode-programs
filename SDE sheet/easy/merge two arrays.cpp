sol1:
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int>v;
        for(int i=0;i<m;i++){
            v.push_back(a[i]);

        }
         for(int i=0;i<n;i++){
            v.push_back(b[i]);

        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            a[i]=v[i];
        }
    }
};


approach 2:

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        for(int i=0;i<n;i++){
            a[m+i]=b[i];
        }
        sort(a.begin(),a.end());
    }
};

optimal approach

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
    }
};


//python
def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        i=m-1
        j=n-1
        k=m+n-1
        while j>=0:
            if i>=0 and nums1[i]>nums2[j]:
                nums1[k]=nums1[i]
                k-=1
                i-=1
            else:
                nums1[k]=nums2[j]
                k-=1
                j-=1

        
