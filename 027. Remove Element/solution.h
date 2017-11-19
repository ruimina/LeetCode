class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num = 0, len = nums.size();
        for(int i=0;i<len;i++){
            int temp = nums[i];
            if(temp != val) nums[num++] = temp;
        }
        return num;
    }
};