
/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, 
you need to do the following things:
Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
The remaining elements of nums are not important as well as the size of nums.
Return k.
*/
#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;

class RemoveElementSolution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // This will keep track of the position where non-val elements should be placed
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i]; // Place non-val element at position k and increment k
            }
        }
        return k;
    }
};

//int main()
//{
//    RemoveElementSolution solution;
//    std::vector<int> question = { 3, 2, 2, 3 };
//    int result = solution.removeElement(question, 3);
//    std::cout << result;
//}