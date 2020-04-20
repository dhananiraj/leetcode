class Solution {
public:
    string reformat(string s) {
      string output, numbers, alpha;
      int n=0,a=0;
      for(char e : s){
        if('0'<=e && e<='9'){
          numbers+=e;
          n++;
        } else {
          alpha+=e;
          a++;
        }
      }
      if(n == a || n == a+1){
        for(auto n_it = numbers.begin(), a_it = alpha.begin(); n_it != numbers.end() || a_it != alpha.end();){
          if(n_it != numbers.end()){
            output += *n_it;
            n_it++;
          }
          if(a_it != alpha.end()){
            output += *a_it;
            a_it++;
          }
        }
      } else if(a == n+1){
        for(auto n_it = numbers.begin(), a_it = alpha.begin(); n_it != numbers.end() || a_it != alpha.end();){
          if(a_it != alpha.end()){
            output += *a_it;
            a_it++;
          }
          if(n_it != numbers.end()){
            output += *n_it;
            n_it++;
          }
        }
      } else {
        output = "";
      }
      return output;
    }
};
