class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>v;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(i!=0 && a[i]==a[i-1]) continue;

            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=a[i]+a[j]+a[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>ans={a[i],a[j],a[k]};
                    v.push_back(ans);
                    j++;
                    k--;
                    while(j<k && a[j]==a[j-1])j++;
                    while(j<k && a[k]==a[k+1])k--;
                }

            }
        }
        return v;
    }
};

class Solution:
    def threeSum(self, a: List[int]) -> List[List[int]]:
        n=len(a)
        b=[]
        c=[]
        a.sort()
        for i in range(n):
            if i!=0 and a[i]==a[i-1]:
                continue
            j=i+1
            k=n-1
            while j<k:
                sum=a[i]+a[j]+a[k]
                if sum<0:
                    j+=1
                elif sum>0:
                    k-=1
                else:
                    c=[a[i],a[j],a[k]]
                    b.append(c)
                    j+=1
                    k-=1
                    while j<k and a[j]==a[j-1]:
                        j+=1
                    while j<k and a[k]==a[k+1]:
                        k-=1
        return b        

        
