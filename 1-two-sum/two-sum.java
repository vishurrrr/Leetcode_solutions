import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                // Return indices of the two numbers
                return new int[] { map.get(complement), i };
            }
            map.put(nums[i], i);
        }

        // This will never run on LeetCode because a solution is guaranteed
        return new int[] {};
    }
}