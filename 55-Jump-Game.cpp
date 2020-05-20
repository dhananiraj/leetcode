class Solution {
public:
    bool canJump(vector<int>& nums) {
      int i, j;
      j = nums.size() - 1;
      for(int i = j - 1; i >= 0; i--){
        if(nums[i] >= j-i){
          j = i;
        }
      }
      return j == 0;
    }
};
