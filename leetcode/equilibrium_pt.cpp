class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_l = 0;
        int sum_r=0;
        int count = -1;
        for(int i = 1 ; i < nums.size() ; i++ ){
            sum_r+=nums[i];
        }
        if(sum_l==sum_r) return 0;
        for(int i = 1 ; i < nums.size() ; i++ ){
            sum_l+=nums[i-1];
            sum_r-=nums[i];
            if(sum_l == sum_r)return i;
        }
        return count;
    }
};
