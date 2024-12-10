class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> m;
        
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<=s.size();j++){
                string k=s.substr(i,j-i);
                int y=1;
                for(int p=1;p<k.size();p++){
                    if(k[p]!=k[p-1]){
                        y=0;
                        break;
                    }
                }
                // cout<<k<<"\n";
                if(y!=0)
                m[k]++;
            }
        }

        int cnt=-1;
        for(auto x:m){
            if(x.second>=3){int l=x.first.size();
                cnt=max(cnt,l);
            }
        }return cnt;
    }
};