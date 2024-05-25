class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
       return cube(n);
    }
    bool cube(int no){
        if(no == 1){
            return true;
        }
        if(no % 3 !=0){
            return false;
        }
        return cube(no/3);
    }
};