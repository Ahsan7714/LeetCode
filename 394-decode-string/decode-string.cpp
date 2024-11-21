class Solution {
public:
    string decodeString(string s) {
        stack<string> stack;  // Stack to store substrings and numbers
        string currentString = "";  // Current substring being processed
        string currentNum = "";  // Current number (multiplier) being processed
        
        for (char ch : s) {
            if (ch == '[') {
                // Push current string and number to stack, reset both
                stack.push(currentString);
                stack.push(currentNum);
                currentString = "";
                currentNum = "";
            } else if (ch == ']') {
                // Pop the multiplier and previous string from stack
                string num = stack.top();
                stack.pop();
                string prevString = stack.top();
                stack.pop();
                
                // Repeat the current string `num` times
                int multiplier = stoi(num);  // Convert string to integer
                string decodedString = "";
                while (multiplier--) {
                    decodedString += currentString;
                }
                
                // Append decoded string to the previous string
                currentString = prevString + decodedString;
            } else if (isdigit(ch)) {
                // If the character is a digit, append it to the current number
                currentNum += ch;
            } else {
                // Append character to the current substring
                currentString += ch;
            }
        }
        
        return currentString;  // Final decoded string
    }
};
