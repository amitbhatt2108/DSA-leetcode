class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
    int sum=0 ;
    int target = 0;
    int answer;
    for(int i= 0; i<=n ; i++) {
        sum = sum+i;
    }
    for(int i =0 ; i<n ; i++){
       target = target +nums[i];
    }
    answer = sum - target;
    return answer;

        
    }
};