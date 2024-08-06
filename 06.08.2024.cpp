class Solution {
public:
    int minimumPushes(string word) {
        // find frequency of each char
        vector<int> freq(26, 0);
        for(auto c : word)
            freq[c - 'a']++;

        // sort freq in descending order
        sort(freq.begin(), freq.end(), greater<int>());

        // calculate ans
        // First 8 freq count should use the single key press --> next 8 double key press --> next 8 triple key press and so on.
        int ans = 0;
        for(int i = 0; i < 26; i++) 
            ans += freq[i] * ((i/8) + 1);
        return ans;
    }
};