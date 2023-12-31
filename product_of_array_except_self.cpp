/*
238. Product of Array Except Self
Medium
21K
1.2K
Companies
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int product2=1;
        vector<int>output;
        //point to be noted,initialising vector
         output.resize(nums.size(), 1);
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=0;j<nums.size();j++){
                    if(j==i){
                        continue;
                    }
                    else{
                        product2=product2*nums[j];
                    }
                }
                output[i]=product2;
            }
            else{
            output[i]=product/nums[i];
            }
        }
        return output;
    }
};