class Solution {
public:
    int myAtoi(string str) {
        while(str.size() && isspace(str.front())) str.erase(str.begin());
        try{
            return stoi(str);
        }
        catch (out_of_range& e)
        {
            if(str[0]=='-') return INT_MIN;
            return INT_MAX;
        }
        catch (invalid_argument& e)
        {
            return 0;
        }
    }
};
