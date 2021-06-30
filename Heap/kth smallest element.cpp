/*Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.*/


int kthSmallest(int a[], int l, int r, int k) {
        priority_queue<int>maxH; //max heap since smallest to be found
        
        for(int i=l;i<=r;i++)
        {
            maxH.push(a[i]);
            if(maxH.size()>k) //if size of heap exceeds k
            {
                maxH.pop(); //pop
            }
        }
        return maxH.top(); 
    }
