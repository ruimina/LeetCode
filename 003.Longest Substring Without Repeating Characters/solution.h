class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int len = s.length();
		int begin=0, sublen=0, tmp;
		map<char,int> maps;
		for(int i = 0,j = 0; j<len; j++)
		{
			map<char,int>::iterator iter = maps.find(s[j]);
			if(iter != maps.end() && i <= iter->second) 
				i = iter->second + 1;			
			tmp = j - i + 1;
			if(tmp > sublen)
			{
				begin = i;
				sublen = tmp;
			}	
			maps[s[j]] = j;
		}
		cout << s.substr(begin,sublen) << endl;
		return sublen;
	}
};