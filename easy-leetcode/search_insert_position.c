int searchInsert(int* nums, int numsSize, int target) {
    int index = numsSize;
    if (numsSize == 1){
        if (nums[0] > target || nums[0] == target){
            index = 0;
        }
        else {
            index = 1;
        }
    }
    for (int i = 0; i <= numsSize-2 ; i++){
        if (nums[0] > target) {
            index = 0;
        }
        if (nums[i] == target){
            index = i;
        }
        if (nums[i] < target && nums[i+1] >= target){
            index = i+1;
        }
    }
    return index;
}
