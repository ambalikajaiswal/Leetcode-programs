//two pointer method

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       int i = 0, j = 0;
        vector<int> v;
        int n = a.size();
        int m = b.size();
        
        while (i != n && j != m) {
            if (a[i] < b[j]) {
                v.push_back(a[i]);
                i++;
            } else {
                v.push_back(b[j]);
                j++;
            }
        }
        
        while (i < n) {
            v.push_back(a[i]);
            i++;
        }
        
        while (j < m) {
            v.push_back(b[j]);
            j++;
        }
        
        int total = v.size();
        
        if (total % 2 == 1) {
            // If the total number of elements is odd, return the middle element as the median.
            return static_cast<double>(v[total / 2]);
        } else {
            int middle1 = v[total / 2 - 1];
            int middle2 = v[total / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
    }
}
};


\\brute force merge and sort

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n= a.size();
        int m= b.size();

        vector<int>v;

        for (int i=0;i<n;i++){
            v.push_back(a[i]);
        }

        for(int i =0;i<m;i++){
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        int med=0;
        int total=v.size();
        if(total%2==1){
            return static_cast<double>(v[total/2]);
        }
        return (static_cast<double>(v[total/2-1])+static_cast<double>(v[total/2]))/2.0;
    }
};

//python solution

class Solution:
    def findMedianSortedArrays(self, a: List[int], b: List[int]) -> float:
        n = len(a)
        m = len(b)
        c = []
        i = 0
        j = 0

        while i !=n and j!= m:
            if a[i] < b[j]:
                c.append(a[i])
                i += 1
            else:
                c.append(b[j])
                j += 1

        while i < n:
            c.append(a[i])
            i += 1

        while j < m:
            c.append(b[j])
            j += 1

        tot = len(c)
        
        if tot % 2 == 1:
            return float(c[tot // 2])
        else:
            return (float(c[tot // 2 - 1]) + float(c[tot // 2])) / 2.0
