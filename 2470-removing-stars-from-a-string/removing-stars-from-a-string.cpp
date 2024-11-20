class Solution {
public:
    string removeStars(string s) {
        stack<char>stack;
        for(char n:s){
            if(n!='*'){
                stack.push(n);
            }else if(!stack.empty()){
                stack.pop();
            }
        }
        string result;
        while(!stack.empty()){
            result+=stack.top();
            stack.pop();
        }
         reverse(result.begin(), result.end());
        return result;
    }
};