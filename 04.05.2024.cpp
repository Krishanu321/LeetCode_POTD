class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        // Sort the people array
        sort(people.begin(), people.end());
        int left = 0;
        int right = people.size() - 1;
        int boats = 0;

        while (left <= right)
        {
            // Try to fit both persons in a boat
            if (people[left] + people[right] <= limit)
            {
                left++;
            }
            // Otherwise, only fit the heaviest person
            right--;
            // Increment boat count
            boats++;
        }

        return boats;
    }
};