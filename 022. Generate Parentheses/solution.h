class Solution {
public:
    vector<string> generateParenthesis(int n) {
        map<string, pair<int,int>> mymap;
        map<string, pair<int,int>> tempmap;
        vector<string> out;
        if(n == 0) return out;
        mymap["("] = make_pair(1,0);
        for(int i=1;i<2*n;i++){
            for(map<string, pair<int,int>>::iterator iter=mymap.begin(); iter!=mymap.end(); iter++){
                string temp = iter->first;
                int left = iter->second.first;
                int right = iter->second.second;
                if(left>=n){
                    tempmap[temp+')'] = make_pair(left,right+1);
                }
                else if(left-right>0){
                    tempmap[temp+'('] = make_pair(left+1,right);
                    tempmap[temp+')'] = make_pair(left,right+1);
                }
                else {
                    tempmap[temp+'('] = make_pair(left+1,right);
                }
            }
            mymap = tempmap;
            tempmap.clear();
        }
        for(map<string, pair<int,int>>::iterator iter=mymap.begin(); iter!=mymap.end(); iter++){
            out.push_back(iter->first);
        }
        return out;
    }
};

ref:
class Solution {
public:
    // n parenthesis: ( 'block of i parenthesis pairs' ) 'block of n-1-i parenthesis pais'
    // i can go from 0 to n-1
    // 
    
    vector<string> generateParenthesis(int n) {
        if (n == 0) {
            return vector<string>{""};
        }
        vector<vector<string> >memo(n+1, vector<string>());
        memo[0] = {""};
        for(int k = 1; k<=n; k++) {
            for(int i=0; i<=k-1; i++) {
                for (string x : memo[i]) {
                    for (string y: memo[k-1-i]) {
                        memo[k].push_back("(" + x + ")" + y);
                    }
                }
            }
        }
        return memo[n];
    }
};