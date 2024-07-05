class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str = to_string(x);
        int i =0;
        int j = str.length()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};