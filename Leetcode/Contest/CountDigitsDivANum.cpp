//link : https://leetcode.com/contest/weekly-contest-326/problems/count-the-digits-that-divide-a-number/

class Solution {
public:
    int countDigits(int num) {
        int z, count = 0;
        int n = num;
        while(num != 0){
            z = num % 10;
            num /= 10;
            if(!(n % z)) count++;
        }
        return count;
    }
};
