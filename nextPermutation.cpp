/*
The idea is to first find the breach, swap and then reverse
///////////////////////////////////////////
//Time - O(N), N = number of elements
//Space - O(1)
///////////////////////////////////////////
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //finding breach
        int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        
        //
        if (i >= 0) {
            int j = nums.size() - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }
        reverse(nums, i + 1);
    }
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void reverse(vector<int>& nums, int start) {
        int i = start, j = nums.size() - 1;
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }
};