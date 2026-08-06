class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int max_count = 0;
        for(int i =0 ; i<n ; i++){
            if(nums[i]==1){
                count++;
                if(count > max_count){//array mai 0 ate hi count dubre 0 ho jarha hai kuki consectuive ones pucha hai
                    max_count = count;
                }    
            }
            else 
            count = 0;
        }
        return max_count;
    }
};