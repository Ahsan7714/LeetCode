class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int i=0;
        while(i<chars.size()){
            char current = chars[i];
            int count =0;
            while(i<chars.size() && chars[i]==current){
                i++;
                count++;
            }
            chars[index++]=current;
            if(count>1){
                for(char c : to_string(count)){
                    chars[index++]=c;
                }
            }
        }
        return index;
    }
};