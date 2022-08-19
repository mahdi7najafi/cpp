#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0;
        int current_num_ones = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                current_num_ones++;
                maximum = max(maximum, current_num_ones);
            }
            else
            {
                current_num_ones = 0;

            }

        }
        return maximum;
    }
};
int main()
{
    Solution obj;
    vector<int> num;
    for (int i = 0;i < 7; i++)
    {
        int input;
        num.push_back(input);
        cin >> input;
    }

    int result = obj.findMaxConsecutiveOnes(num);
    cout << "Output: " << result << endl;

    cin.get();
}


/*
* Max Consecutive Ones

Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example:
    Input: nums = [1,1,0,1,1,1]
    Output: 3
    Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/