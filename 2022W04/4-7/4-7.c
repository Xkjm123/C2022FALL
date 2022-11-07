//https://www.acwing.com/blog/content/27573/
int duplicateInArray(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0 || nums[i] >= numsSize) { return -1; }
    }
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) { return nums[i]; }
        }
    }
    return -1;
}