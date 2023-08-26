class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum=0;
        int duplicate = x;
        while(x>0){
            int lastD=x%10;
            revNum=(revNum*10)+lastD;
            x=x/10;
        }
        if(duplicate==revNum)
            return true;
        else
            return false;
    }
};