class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int i, j, k, flag=0, countbits=0, count=0;
        for(i=left ; i<=right ; i++)
        {
            flag=0;
            countbits=0;
            j = i;
            while(j>0)
            {
                k = j%2;
                j = j/2;
                if(k==1)
                {
                    countbits++;
                }
            }
            for(j=2 ; j<=countbits/2 ; j++)
            {
                if(countbits%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag!=1 && countbits>1)
            {
                count++;
            }
        }
        return count;
    }
};