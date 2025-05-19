int removeElement(int* nums, int numsSize, int val) {
    int counter = 0;
    int length = numsSize;

    int i = 0;
    while (i < length - counter) {
        if (nums[i] == val) {
            counter++;

            int temp = nums[i];
            nums[i] = nums[length - counter];
            nums[length - counter] = temp;
        } else {
            i++;
        }
    }

    for (int j = length - counter; j < length; j++) {
        nums[j] = -1;
    }

    return length - counter;
}
