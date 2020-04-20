class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> output;
        unordered_map<string,unordered_map<string,int>> table;
        set<string> heading;
        vector<string> temp{"Table"};
        set<int> number_set;
        for(auto& order: orders){
          table[order[1]][order[2]]++;
          heading.insert(order[2]);
          number_set.insert(stoi(order[1]));
        }
        for(auto& key: heading){
          temp.insert(temp.end(),1,key);
        }
        output.insert(output.end(),1,temp);    
      
        for(auto table_number_int: number_set){
          string table_number = to_string(table_number_int);
          temp = {};
          temp.insert(temp.end(),1,table_number);
          for(auto& key: heading){
            temp.insert(temp.end(),1,to_string(table[table_number][key]));
          }
          output.insert(output.end(),1,temp);
        }
        return output;
    }
};
