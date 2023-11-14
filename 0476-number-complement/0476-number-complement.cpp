class Solution {
public:
    int findComplement(int num) {
        if(num==0)
            return 1;
        int rem;
        long int mul=1,ans=0;
        while(num)
        {    rem=num%2;
        rem=rem^1;
        num/=2;
        ans=ans+rem*mul;
        mul*=2;
        }
        return ans;
     
        
    }
};