//796. Rotate String
//Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true


class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans="";
        ans=s+s;
        if(s.size()!=goal.size()) return false;
        if(ans.find(goal)!=string::npos) return true;
        else return false;
    }
};