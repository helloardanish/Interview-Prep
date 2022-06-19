// Search Insert Position


/*

https://leetcode.com/problems/search-insert-position/

*/


class Solution {
    public int searchInsert(int[] nums, int target) {
        
        int s=0;
        int end = nums.length-1;
        
        if(target < nums[0]){
            return 0;
        }else if(target > nums[end]){
            return end+1;
        }
        
        while(s<=end){
            int mid = s+(end-s)/2; //2
            if(nums[mid]==target){
                return mid;
            }
            
            if(target < nums[mid]){
                end = mid-1;
            }else if(target > nums[mid]){
                s = mid+1;
            }
        }
        return s;
    }
}
