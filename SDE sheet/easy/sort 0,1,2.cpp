class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        int cnt=0,bnt=0,snt=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) cnt++;
            else if(a[i]==1)bnt++;
            else snt++;
        }
        for(int i=0;i<cnt;i++){
            a[i]=0;
        }
        for(int i=cnt;i<cnt+bnt;i++){
            a[i]=1;
        }
        for(int i=cnt+bnt;i<cnt+bnt+snt;i++){
            a[i]=2;
        }
    }

};

aaprocah 2
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        int m=0,l=0,h=n-1;
        while(m<=h){
            if(a[m]==0){
                swap(a[l],a[m]);
                l++;
                m++;
            }
            else if(a[m]==1){
                m++;
            }
            else{
                swap(a[m],a[h]);
                h--;
            }
        }
    }
};


class Solution:
    def sortColors(self, a: List[int]) -> None:
        n=len(a)
        m=0
        l=0
        h=n-1
        while m<=h:
            if a[m]==0:
                a[l],a[m]=a[m],a[l]
                l+=1
                m+=1
            elif a[m]==1:
                m+=1
            else:
                a[m],a[h]=a[h],a[m]
                h-=1
            
        
