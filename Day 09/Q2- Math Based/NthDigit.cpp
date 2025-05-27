class Solution {
    public:
        int findNthDigit(int n) {
            long long digitCount = 1; 
            long long rangeStart = 1; 
            long long numbersInRange = 9; 
            
            while (n > digitCount * numbersInRange) {
                n -= digitCount * numbersInRange;
                digitCount++;
                rangeStart *= 10;
                numbersInRange *= 10;
            }
            
            long long exactNumber = rangeStart + (n - 1) / digitCount;
            
            string numStr = to_string(exactNumber);
            int position = (n - 1) % digitCount;
            
            return numStr[position] - '0'; 
        }
    };