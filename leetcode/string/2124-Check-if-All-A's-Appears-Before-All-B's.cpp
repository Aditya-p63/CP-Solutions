class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool flag = false;
        for(char c : s){
            if(c=='b') flag = true;
            if( flag == true && c == 'a') return false;
        }
        return true;
    }
};