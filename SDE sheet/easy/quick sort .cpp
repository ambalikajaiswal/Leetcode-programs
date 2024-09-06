//{ Driver Code Starts
nds
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int low, int high)
    {
       if(low<high){
           int p= partition(a,low,high);
           quickSort(a,low,p-1);
           quickSort(a,p+1,high);
           
       } 
       
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       int pivot=a[low];
       int i=low;
       int j=high;
       
      while (i < j) {
        while (a[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (a[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(a[i], a[j]);
    }
        swap(a[low], a[j]);
        return j;
       }
    
};


\\python

class Solution:
    #Function to sort a list using quick sort algorithm.
    def quickSort(self,a,low,high):
       if(low<high):
           p= self.partition(a,low,high)
           self.quickSort(a,low,p-1)
           self.quickSort(a,p+1,high)
    
    def partition(self,a,low,high):
       pivot= a[low]
       i=low
       j=high
       
       while(i<j):
           while(a[i]<=pivot and i<=high-1):
               i+=1
           while(a[j]>pivot and j>=low+1):
               j-=1
           if(i<j):
               a[i],a[j]=a[j],a[i]
       a[low],a[j]=a[j],a[low]
       return j
    


