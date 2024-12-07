class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> ans;

        for(int i =0; i<n; i++){
            int need = target - nums[i];
            if(ans.find(need)  != ans.end()){
                return {ans[need], i};
            }
            ans[nums[i]] = i ;

        }
        return {-1, -1};
    }
};