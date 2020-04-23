class Solution {
public:
    string reverseWords(string s) {
        stack<string> stack_;
        stringstream sin_(s);
        string temp;
        string output = "";
        while(sin_ >> temp) {
            stack_.push(temp);
        }
        while(!stack_.empty()) {
            if(!output.empty())
                output += " ";
            output += stack_.top();
            stack_.pop();
        }
        return output;
    }
};
