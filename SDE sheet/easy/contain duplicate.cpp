approch 1:
 unordered_set<int>s(a.begin(),a.end());
       return (s.size()!=a.size());

approach 2:

sort(a.begin(),a.end());
      for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1])
          return true;
      }
      return false;

approach 3:

unordered_map<int,int>m;
        for(auto x:a){
            if(m.find(x)!=m.end()){
                return true;
            
            }
           m[x]++;
        }
       return false; 
