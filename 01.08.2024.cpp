class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int count = 0;
        
        for (const std::string& detail : details) {
            // Extract the age part of the detail string
            int age = std::stoi(detail.substr(11, 2));
            
            // Check if the age is strictly more than 60
            if (age > 60) {
                count++;
            }
        }
        
        return count;
    }
};