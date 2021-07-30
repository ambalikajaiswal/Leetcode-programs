/*Input:
N = 4
X[] = 5,15,1,3
Output:
5
10
5
4
Explanation:Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5) 
15 goes to stream --> median 10 (5,15) 
1 goes to stream --> median 5 (5,15,1) 
3 goes to stream --> median 4 (5,15,1 3)*/

class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>max; //max heap
    priority_queue<int,vector<int>,greater<int>>min;//min heap
    void insertHeap(int &x)
    {
        if(max.empty())
        {
            max.push(x);
            return;
        }
        if(max.size()>min.size())
        {
            if(max.top()>x)
            {
                min.push(max.top());
                max.pop();
                max.push(x);
            }
            else
            {
                min.push(x);
            }
        }
        else
        {
            if(max.top()>x)
            {
                max.push(x);
            }
            else{
                min.push(x);
                max.push(min.top());
                min.pop();
                
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(max.size()>min.size())
        {
            return max.top();
        }
        else{
            return(max.top()+min.top())/2.0;
        }
    }
};
