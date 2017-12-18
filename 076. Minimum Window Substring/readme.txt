Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n). 
For example,
S = "ADOBECODEBANC"
T = "ABC"
Minimum window is "BANC". 

��������S��ģʽ��T����S���ҵ�����T�����ַ�����С�Ӵ���

��һ��map��¼T�������ַ����ִ�������һ��map��¼ѭ������
���ַ����ִ�����ѭ��ʱ��������������������ơ�
�����ʱ�Ӵ�i:j�������ַ����ﵽT�����������ƶ��󻬱꣬
ֱ�������㣬����¼��ʱ�ĳ��ȡ������ƶ��һ��ֱ꣬�����㡣

�ο���ֻ��Ҫһ��map�����������ͳ�Ƶ���T���ַ�������
�ȼ�¼T�������ַ����ִ�����ÿ������
�����ַ���--�������ǰ��>0��˵������ַ���T�У�
������--��end++�����������Ϊ0�ˣ�˵���Ѿ������ˡ���ʼѭ��begin++��
���map[begin]==0,��һ�������жϵ�ǰ�ַ���T�У��Ҳ��Ƕ���ġ�
����һ���������˸�����map�ж�Ӧ���ַ�++��

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