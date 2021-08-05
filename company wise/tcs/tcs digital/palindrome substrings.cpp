/*Problem Description -:  In this 3 Palindrome, Given an input string word, split the string into exactly 3 palindromic substrings. Working from left to right, choose the smallest split for the first substring that still allows the remaining word to be split into 2 palindromes.

Similarly, choose the smallest second palindromic substring that leaves a third palindromic substring.

If there is no way to split the word into exactly three palindromic substrings, print “Impossible” (without quotes). Every character of the string needs to be consumed.
Example 1

Input

nayannamantenet

Output

nayan

naman

tenet*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is(string s)
{
    string s1=s;
    reverse(s1.begin(),s1.end());
    return(s1==s);
}

int main() {
	string s;
	cin>>s;
	string s1,s2,s3;
	
	int n=s.length();
	for(int i=1;i<n-1;i++)
	{
	    s1=s.substr(0,i);
	    if(is(s1))
	      for(int j=1;j<n-i;j++)
	      {
	          s2=s.substr(i,j);
	          s3=s.substr(i+j,n-i-j);
	          if(is(s2)&&is(s3))
	          {
	              cout<<s1<<endl<<s2<<endl<<s3;
	              return 0;
	          }
	      }
	}
	cout<<"inp";
	return 0;
}
