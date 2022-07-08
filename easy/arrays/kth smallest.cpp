// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.

sol 1:


int kthSmallest(int arr[], int l, int r, int k) {
        
        sort(arr,arr+(r+1));
        
        int x=arr[k-1];
        return x;
    }


sol2: max heap

int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int>maxh;
        
        for(int i=0;i<r+1;i++)
        {
            maxh.push(arr[i]);
            
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        return maxh.top();
    }
};
