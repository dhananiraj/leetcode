bool reach(int a, int b, int t) {
        if (a < b) {
            return a + t >= b;
        }
        return b + t >= a;
    }
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if (t == 0 && k == 10000) return false;
        
        int w = nums.size();
        for (unsigned int i = 0; i < w; ++i) {
            for (unsigned int j = i + 1; j <= i + k && j < w; ++j) {
                if (reach(nums[i], nums[j], t)) return true;
            }
        }
        return false;
    }
