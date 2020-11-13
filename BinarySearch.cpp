int search(vector<int>& nums, int target) {
  
        int l = 0, r = nums.size()-1;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        if(nums[mid]==target)
            return mid;
        if (nums[mid]>target)
            r = mid - 1;
        else
            l = mid;
    }return -1;}
