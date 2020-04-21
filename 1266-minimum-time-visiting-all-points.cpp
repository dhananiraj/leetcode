class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t=0;
        int l = points.size();
        auto& pp = points[0];
        for(int i = 1; i < l; i++){
          auto& cp = points[i];
          t += max(abs(pp[0]-cp[0]),abs(pp[1]-cp[1]));
          pp = cp;
        }
        return t;
    }
};
