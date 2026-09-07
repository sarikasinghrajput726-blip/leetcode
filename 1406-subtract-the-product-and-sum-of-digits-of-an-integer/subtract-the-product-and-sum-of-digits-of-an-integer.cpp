class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int mul=1;
        int ans=0;
        while(n>0){
            int digit=n%10;
             sum=sum+digit;
             mul=mul*digit;
             n=n/10;
        }
        ans=mul-sum;
        return ans;
        
    }
};