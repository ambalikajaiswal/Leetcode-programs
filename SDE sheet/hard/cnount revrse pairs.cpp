i<j and a[i]>2*a[j]


class Solution {
public:
    void merge(vector<int>& a,int low,int mid,int high){
        int l=low;
        int r=mid+1;
        vector<int>v;
        while(l<=mid &&r<=high){
            if(a[l]<=a[r]){
                v.push_back(a[l]);
                l++;
            }
            else{
                v.push_back(a[r]);
                r++;
            }
        }
        while(l<=mid){
            v.push_back(a[l]);
            l++;
        }
        while(r<=high){
            v.push_back(a[r]);
            r++;
        }
        for(int i=low;i<=high;i++){
            a[i]=v[i-low];
        }
    }
    int countpair(vector<int>& a,int l,int m,int h){
        int r=m+1;
        int cnt=0;
        for(int i=l;i<=m;i++){
            while(r<=h && a[i]>2*(long long)a[r]){
                r++;}
                cnt+=r-(m+1);
            
        }
        return cnt;
    }
    int mergesort(vector<int>& a,int l,int h){
        int cnt=0;
        if(l>=h) return cnt;
        int m=(l+h)/2;
        cnt+=mergesort(a,l,m);
        cnt+=mergesort(a,m+1,h);
        cnt+=countpair(a,l,m,h);
        merge(a,l,m,h);
        return cnt;
    }
    int reversePairs(vector<int>& a) {
        int n=a.size();
        return mergesort(a,0,n-1);
    }
};
