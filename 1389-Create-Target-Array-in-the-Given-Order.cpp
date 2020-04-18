class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> o;
        for(auto n = nums.begin(), i = index.begin(); n != nums.end() && i != index.end(); n++, i++){
          o.insert(o.begin()+*i,1,*n);
        }
        return o;
    }
};