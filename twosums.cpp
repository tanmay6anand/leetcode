#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        set<int> ans;
        // vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    ans.insert(i);
                    ans.insert(j);
                }
            }
        }

        std::vector a(ans.begin(), ans.end());
        return a;
    }
};