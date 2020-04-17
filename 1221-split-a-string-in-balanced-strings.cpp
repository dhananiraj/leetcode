class Solution {
public:
    int balancedStringSplit(string s) {
        int o=0,c=0;
        for(char a:s){
          if(a=='L')
            c++;
          else
            c--;
          if(!c)
            o++;
        }
        return o;
    }
};
