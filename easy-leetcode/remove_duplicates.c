int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int yedek_counter = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[yedek_counter - 1]) {
            nums[yedek_counter++] = nums[i];
        }
    }

    for (int i = yedek_counter; i < numsSize; i++) {
        nums[i] = -1;
    }

    return yedek_counter;
}
