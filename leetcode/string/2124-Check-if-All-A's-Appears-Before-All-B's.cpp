class Solution {
public:
    bool checkString(string s) {
        // int n = ;
        // bool flag = false;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i]=='b' && s[i+1]=='a') return false;
        }
        return true;
    }
};