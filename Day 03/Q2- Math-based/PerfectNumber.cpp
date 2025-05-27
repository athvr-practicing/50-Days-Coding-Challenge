class Solution {
    public:
        bool checkPerfectNumber(int num) {
            int i=0,sum=0;
            for(i=1;i<num;i++)
            {
                if(num%i==0)
                     sum=sum+i;
            }
            return (sum==num);
        }
    };