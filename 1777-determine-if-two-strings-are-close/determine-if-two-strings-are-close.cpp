class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        // Step 1: Check if lengths are the same
        if (word1.size() != word2.size()) {
            return false;
        }

        // Step 2: Check if both strings have the same set of unique characters
        set<char> set1(word1.begin(), word1.end());
        set<char> set2(word2.begin(), word2.end());
        if (set1 != set2) {
            return false;
        }

        // Step 3: Count the frequency of characters in both strings
        vector<int> freq1(26, 0), freq2(26, 0);
        for (char ch : word1) {
            freq1[ch - 'a']++;
        }
        for (char ch : word2) {
            freq2[ch - 'a']++;
        }

        // Step 4: Check if the frequencies can be rearranged
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return freq1 == freq2;
    }
};
