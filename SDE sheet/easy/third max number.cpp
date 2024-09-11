class Solution {
public:
    int thirdMax(vector<int>& d) {
        int a=INT_MIN;
        for(int i=0;i<d.size();i++){
            if(d[i]>a){
                a=d[i];
            }
        }
        int b=INT_MIN;
        for(int i=0;i<d.size();i++){
            if(d[i]>b && d[i]<a){
                b=d[i];
            }
        }
        int c=INT_MIN;
        bool f=0;
        for(int i=0;i<d.size();i++){
            if(c<=d[i] && d[i]<b){
                c=d[i];
                f=1;
            }
        }
        if(f) return c;
        return a;
    }
};
