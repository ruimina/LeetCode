/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
private:
    static bool myComp(const Interval& a, const Interval& b){
        return a.start < b.start;
    }    
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        sort(intervals.begin(), intervals.end(), myComp);
        vector<Interval> out;
        int left = newInterval.start, right, i=0;
        bool flag = false;
        for(i = 0; i < intervals.size(); i++){
            if(flag || intervals[i].end < newInterval.start){
                out.push_back(intervals[i]);
            }
            else{
                left = min(intervals[i].start, left);
                if(intervals[i].end >= newInterval.end){
                    if(intervals[i].start > newInterval.end){
                        out.push_back(Interval(left, newInterval.end));
                        left = intervals[i].start;
                    }
                    out.push_back(Interval(left, intervals[i].end));
                    flag = true;
                }
            }
        }
        if(!flag){
            out.push_back(Interval(left, newInterval.end));
        }
        return out;
    }
};