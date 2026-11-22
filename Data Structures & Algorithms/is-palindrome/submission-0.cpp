class Solution {
public:
    bool isPalindrome(string s) {
        string sc = "";
        string alphanum = "abcdefghijklmnopqrstuvwxyz0123456789";
        for(int i = 0; i < s.size(); ++i){
            if(alphanum.contains(tolower(s[i]))){
                sc += tolower(s[i]);
            }
        }
        string scr(sc.rbegin(), sc.rend());
        if(sc == scr){
            return true;
        }
        return false;
    }
};
