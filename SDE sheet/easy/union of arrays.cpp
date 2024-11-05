vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>v;
        int i=0,j=0;
        int n=a.size();
        int m=b.size();
        while(i<n &&j<m){
            if(a[i]<=b[j]){
                if(v.size()==0||v.back()!=a[i]){
                v.push_back(a[i]);
               
                }
                 i++;
            }
            else{
                if(v.size()==0||v.back()!=b[j]){
                v.push_back(b[j]);
                
                }
                j++;
            }
        }
        while(i<n){
            if(v.back()!=a[i]){
            v.push_back(a[i]);
            
            }
            i++;
        }
        while(j<m){
            if(v.back()!=b[j]){
            v.push_back(b[j]);
            
            }
            j++;
        }
        return v;
        
    }
};
