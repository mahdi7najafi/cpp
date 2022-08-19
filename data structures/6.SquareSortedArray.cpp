/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Example 1:
	Input: nums = [-4,-1,0,3,10]
	Output: [0,1,9,16,100]
	Explanation: After squaring, the array becomes [16,1,0,9,100].
	After sorting, it becomes [0,1,9,16,100].
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> squarelist;
    for (int i = 0;i < 5; i++)
    {
        int input;
        cin >> input;
        squarelist.push_back(input);
        
    }
    
     for (int i = 0; i < squarelist.size(); i++)
        {
            squarelist[i] = squarelist[i]*squarelist[i];
        }
    
    for (int i = 0; i < squarelist.size()-1; i++)
        {
            for (int j = i + 1; j < squarelist.size(); j++)
            {
                if (squarelist[i] > squarelist[j])
                {
                    int tmp = squarelist[i];
                    squarelist[i] = squarelist[j];
                    squarelist[j] = tmp;
                }
            }
        }
        for(int x : squarelist)
        {
            cout << x << " ";
        }
}