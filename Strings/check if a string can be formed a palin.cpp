input: aabba
output: 1
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool res(string s)
{
    int m[256]={0};
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    int cnt=0;
    for(int i=0;i<256;i++)
    {
        if(m[i]&1) // no. of chars whose count is odd
        cnt++;
        
        if(cnt>1)
        return false;
            
    }
    return true;
}

int main() {
 string s="abbaa";
 cout<<res(s);
	return 0;
}
