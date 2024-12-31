class Solution {
public:

    unordered_map<int,int> mp;
    int solve(vector<int>& day, vector<int>&cost, int pos,int r){
        if(pos>day.size()-1) return 0;
        if(r>=day[pos]) return solve(day,cost,pos+1,r);
        if(mp.count(pos)) return mp[pos];

        int one=cost[0]+solve(day,cost,pos+1,day[pos]);
        int seven=cost[1]+solve(day,cost,pos+1,day[pos]+6);
        int thirty=cost[2]+solve(day,cost,pos+1,day[pos]+29);
        return mp[pos]=min({one,seven,thirty});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return min({costs[0]+solve(days,costs,0,days[0]),costs[1]+solve(days,costs,0,days[0]+6),costs[2]+solve(days,costs,0,days[0]+29)});
    }
};