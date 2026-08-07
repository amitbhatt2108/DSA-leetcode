class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;//search 0 
        int j = 0;//fullfill
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};