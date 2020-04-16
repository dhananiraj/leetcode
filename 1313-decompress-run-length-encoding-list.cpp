class Solution {
public:
    vector<int> decompressRLElist(vector<int>& n) {
        vector<int> r;
        int i=0;
        while(i+1<n.size()-i){
            r.insert(r.end(),n[2*i],n[2*i+1]);
            i+=1;
        }
        return r;
    }
};