/*Problem Statement:-

Compute the nearest larger number by interchanging its digits updated.Given 2 numbers a and b find the smallest number greater than b by interchanging the digits of a and if not possible print -1.
Example 1:

Sample Input:

    459 500

Sample Output:
    549*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    int b,c;
    cin>>a>>b;
    sort(a.begin(),a.end(),greater<int>());
 
    c=atoi(a.c_str()); //to convert into integer
 
    if(b>c)
    {cout<<-1;
    return 0;}
    while(b<c)
    {
        prev_permutation(a.begin(),a.end());
        c=atoi(a.c_str());
    }
    next_permutation(a.begin(),a.end());
    cout<<a;
    return 0;
}
