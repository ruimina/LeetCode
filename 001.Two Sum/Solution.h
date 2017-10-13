#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		map<int,int> maps;
		int order = 0;
		vector<int> solution;
        for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++)
		{
			map<int,int>::iterator other = maps.find(target - *iter);
			if(other != maps.end())
			{
				solution.push_back(other->second);
				solution.push_back(order);
				return solution;
			}
			maps.insert(make_pair(*iter,order++));
		}
		return solution;
    }
};