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
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size() == 0) return vector<Interval>();
        sort(intervals.begin(), intervals.end(), myComp);
        int left = intervals[0].start, right = intervals[0].end;
        vector<Interval> out;
        for(int i=1; i<intervals.size(); i++){
            if(right >= intervals[i].start){
                right = max(right,intervals[i].end);
            }
            else{
                out.push_back(Interval(left, right));
                left = intervals[i].start;
                right = intervals[i].end;
            }
        }
        out.push_back(Interval(left, right));
        return out;
    }
};