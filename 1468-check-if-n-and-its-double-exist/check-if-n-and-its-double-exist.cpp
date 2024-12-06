class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }

        for(int i=0;i<arr.size();i++){
            if(m.find(arr[i]*2)!=m.end()){
                if(arr[i]==0){
                    if(m[arr[i]]>1) return true;
                    
                }else return true;
            } 
        }return false;
    }
};