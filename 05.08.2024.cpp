class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> countMap;

        // Count the occurrences of each string
        for (const string &s : arr)
        {
            countMap[s]++;
        }

        // Collect the distinct strings in order
        vector<string> distinctStrings;
        for (const string &s : arr)
        {
            if (countMap[s] == 1)
            {
                distinctStrings.push_back(s);
            }
        }

        // Return the kth distinct string if it exists
        if (k <= distinctStrings.size())
        {
            return distinctStrings[k - 1];
        }
        else
        {
            return "";
        }
    }
};