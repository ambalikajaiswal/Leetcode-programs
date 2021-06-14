/*For example if the given range is {10, 115}, then output should be {11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111}*/

//checl if number is palindrome or not

int is(int n)
{
  int rev=0;
  for(int i=n;i>0;i/=10)
  {
    rev=rev*10+rev%10;
  }  
    return(n==rev);
}

//utility function to print all palindromes in the range
void res(int min,int max)
{
  for(int i=min;i<max;i++)
  {
     is(i);
    cout<<i<<" ";
  }
}
  
