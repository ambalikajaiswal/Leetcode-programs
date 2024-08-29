// \\Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

cpp
evenlyDivides(int N){
        // int cnt = (int)(log10(N)+1); to check the count of the digits 
        // return cnt;
         int copy = N;
        int count =0;
        while(copy>0) {
            int lastNum = copy%10;
            copy/=10;
            if(lastNum!=0 && N%lastNum==0) 
            count++;
        }
        return count;
        
        
    }
};

python



class Solution:
    def evenlyDivides (self, N):
           cnt = 0
        n = N
        
        while n > 0:
            last = n % 10  # Extract the last digit
            if last != 0 and N % last == 0:
                cnt += 1   # Increment the count if the last digit divides N
            n = n // 10    # Remove the last digit
    
        return cnt
           

