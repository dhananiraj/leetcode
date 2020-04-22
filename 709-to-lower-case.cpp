class Solution {
public:
    string toLowerCase(string str) {
        string o = "";
        for(char a : str){
          if('A' <= a && a <= 'Z'){
            o += 'a' + (a - 'A');
          } else {
            o += a;
          }
        }
        return o;
    }
};
