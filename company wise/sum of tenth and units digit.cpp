int res(int n)
{
int sum=0;
  int ten=(n%100)/10;
  int one=n%10;
  sum=ten+one;
  return sum;
}
