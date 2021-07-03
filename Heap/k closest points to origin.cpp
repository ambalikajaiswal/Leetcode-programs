/*Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        int n=a.size();
        vector<vector<int>>s;
        priority_queue<pair<int,pair<int,int>>>maxH; //pair to store (x^2+y^,{x,y})
        for(int i=0;i<n;i++)
        {
          maxH.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});
            if(maxH.size()>k)
            {
              maxH.pop();
            }
        }
        while(maxH.size()>0)
        {
         //pair<int,int>p=maxH.top().second;
            s.push_back({maxH.top().second.first,maxH.top().second.second}); //push x,y pair
            maxH.pop();
        }
        return s;
    }
};
