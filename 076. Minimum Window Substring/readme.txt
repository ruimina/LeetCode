Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n). 
For example,
S = "ADOBECODEBANC"
T = "ABC"
Minimum window is "BANC". 

给定长串S和模式串T，在S中找到包含T所有字符的最小子串。

用一个map记录T中所有字符出现次数，用一个map记录循环过程
中字符出现次数。循环时用左右两个滑标仅向右移。
如果此时子串i:j中所有字符均达到T的数量，则移动左滑标，
直到不满足，并记录此时的长度。否则移动右滑标，直到满足。

参考：只需要一个map，另外计数器统计的是T中字符数量。
先记录T中所有字符出现次数。每次遇到
任意字符则--。如果当前还>0，说明这个字符在T中，
计数器--，end++。如果计数器为0了，说明已经满足了。开始循环begin++。
如果map[begin]==0,则一定可以判断当前字符在T中，且不是多余的。
否则一定被减成了负数，map中对应的字符++。

string minWindow(string s, string t) {
        vector<int> map(128,0);
        for(auto c: t) map[c]++;
        int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
        while(end<s.size()){
            if(map[s[end++]]-->0) counter--; //in t
            while(counter==0){ //valid
                if(end-begin<d)  d=end-(head=begin);
                if(map[s[begin++]]++==0) counter++;  //make it invalid
            }  
        }
        return d==INT_MAX? "":s.substr(head, d);
    }