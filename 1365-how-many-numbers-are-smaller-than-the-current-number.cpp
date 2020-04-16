class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int> o;
      int d[101] = {0};
      for(int x:nums)
        d[x]++;
      for(int i=1;i<101;i++)
        d[i]+=d[i-1];
      for(int x:nums){
        if(x!=0)
          o.insert(o.end(),1,d[x-1]);
        else
          o.insert(o.end(),1,0);
      }
      return o;
    }
};
