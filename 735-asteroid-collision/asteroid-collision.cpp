class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>stack;
        for(int n:asteroids){
            bool destroyed=false;
            while(!stack.empty() && n<0 && stack.top()>0){
                if(abs(n)>stack.top()){
                    stack.pop();
                }else if(abs(n)==stack.top()){
                    stack.pop();
                    destroyed = true;
                    break;
                }else{
                     destroyed = true;
                    break;
                }
            }
            if(!destroyed){
                stack.push(n);
            }
        }
        vector<int>result(stack.size());
        for(int i=stack.size()-1;i>=0;--i){
            result[i]=stack.top();
            stack.pop();
        }
        return result;
    }
};