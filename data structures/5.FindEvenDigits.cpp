/*
* 
    Find Numbers with Even Number of Digits
    Given an array nums of integers, return how many of them contain an even number of digits.
    
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.
    
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count_even = 0;
        int digit = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            digit = 0;

            while (nums[i] != 0)
            {
                nums[i] = nums[i] / 10;
                digit++;
            }
            if (digit % 2 == 0)
            {
                count_even++;
            }
        }
        return count_even;
       
    }
  
};


int main()
{
    Solution obj;
    vector<int> num;
    for (int i = 0;i < 5; i++)
    {
        int input;
        num.push_back(input);
        cin >> input;
    }

    int result = obj.findNumbers(num);
    cout << "Output: " << result << endl;

    cin.get();
}


