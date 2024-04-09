class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        queue<int> q;
        int n = tickets.size();
        int step = 0;
        if (tickets[k] == 1)
        {
            return k + 1;
        }
        while (tickets[k] > 0)
        {

            for (int i = 0; i < n; i++)
            {
                if (tickets[i] != 0)
                {
                    tickets[i]--;
                    step++;
                }
                if (tickets[k] == 0)
                {
                    return step;
                }
            }
        }

        return step;
    }
};