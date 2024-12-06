class Solution {
public:
    bool canChange(string start, string target) {
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        int i=0,j=0;
        while(i<=start.length() && j<=target.length()){
            if(start[i]=='_' || target[j]=='_'){
                if(start[i]=='_') i++;
                if(target[j]=='_') j++;
            }else{
                if(i==start.size() && j==target.size()) break;
                cout<<i<<" "<<j<<endl;
                if(start[i]==target[j]){
                    if(start[i]=='L' && j<=i){
                        i++;
                        j++;
                    }else if(start[i]=='R' && j>=i){
                        i++;
                        j++;
                    }else return false;
                }else return false;
                
            }

        }
        return true;
    }
};