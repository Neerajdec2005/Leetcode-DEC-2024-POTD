class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cnt=0;
        int x=0;int y=0;
        for(int i=0;i<arr.size();i++){
            x+=i;
            y+=arr[i];

            if(x==y){
                cnt++;
                x=0;
                y=0;
            }
        }return cnt;
        

    }
};