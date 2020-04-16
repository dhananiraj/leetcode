class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0,z=0;
        for(int& x:nums){
          z=0;
          while(x){
            z++;
            x/=10;
          }
          if(z%2==0)
            c++;
        } 
        return c++;
    }
};
