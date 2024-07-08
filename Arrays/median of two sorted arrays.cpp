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
