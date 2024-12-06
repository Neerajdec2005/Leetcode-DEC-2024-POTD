class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int c=1,i=0,s=sentence.size();
        while(i<s){
            while(i<s && sentence[i]==' '){
                i++;
                c++;
            }int cnt=0;
            while(i<s && cnt<searchWord.size() && sentence[i]==searchWord[cnt]){
                i++;
                cnt++;
            }
            if(cnt==searchWord.size()) return c;
            while(i<s && sentence[i]!=' ') i++;
        }return -1;
    }
};