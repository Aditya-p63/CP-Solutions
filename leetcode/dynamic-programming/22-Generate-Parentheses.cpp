class Solution {
public:
void d(vector<string>&v,int n,int o,int c,string s){
    if(c==n){
        v.push_back(s);
        return;
    }
    if(o<n) d(v,n,o+1,c,s+"(");
    if(c <o ) d(v,n,o,c+1,s+")");

}
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        d(v,n,0,0,"");
        return v;
    }
};