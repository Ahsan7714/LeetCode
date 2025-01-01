class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> pair;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            pair.push_back({position[i],time});
        }
        sort(pair.rbegin(),pair.rend());
        vector<double>stack;
        for(const auto p:pair){
            double time=p.second;
            stack.push_back(time);
            if(stack.size()>=2 && stack.back()<=stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};