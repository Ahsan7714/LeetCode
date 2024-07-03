class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> v;
        map<int,int>m;
        for (int i = 0; i < b.size(); i++) m[b[i]]=i+1;
        for (int i = 0; i < a.size(); i++) {
            int num = -1;
            for (int j = m[a[i]]; j < b.size(); j++) {
                if (b[j] > a[i]) {
                    num = b[j];
                    break;
                }
            }
            v.push_back(num);
        }
        return v;
    }
};