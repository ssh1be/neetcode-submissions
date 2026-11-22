class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> bracketPairs = {
            {'(', ')'} , {'[', ']'}, {'{', '}'}
        };
        for (int i = 0; i < s.size(); ++i) {
            if(bracketPairs.contains(s[i])){
                open.push(s[i]);
            } else {
                if(open.empty()){
                    return false;
                }
                char c = open.top();
                if (bracketPairs[c] == s[i]) {
                    open.pop();
                } else {
                    return false;
                }
            }
        }
        if(open.empty()){
            return true;
        }
        return false;
    }
};
