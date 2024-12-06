class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j=0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]+1==str2[j] || str1[i]==str2[j] || str1[i]=='z' && 'a'==str2[j]){
                j++;
            }
        }if(j==str2.size()) return true;
        return false;
    }
};