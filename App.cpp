#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        // result that will be returned
        int result = 0;

        // iterate through the array
        for (int i = 0; i < nums.size(); i++) 
        {

            // this is using bit manipulation
            // ^= is XOR
            // if we take XOR of zero and some bit, it will return that bit
            // if we take ZOR of two same bits, it will return 0
            // we can XOR all the bits together to find the unique number

            // EX: [2, 2, 1]
            // result is set to zero, first element is 2, 0 XOR 2 results in 2
            // 2 XOR 2 results in zero
            // 0 XOR 1 results in 1
            result ^= nums[i];
        }
        return result;
    }
};
int main()
{
    Solution solution;
    vector<int> example_one{ 2, 2, 1 };
    vector<int> example_two{ 4, 1, 2, 1, 2 };
    vector<int> example_three{ 1 };
   
    cout << "Example One : " << solution.singleNumber(example_one);
    cout << "Example Two : " << solution.singleNumber(example_two);
    cout << "Example Three : " << solution.singleNumber(example_three);

	return 0;
}
