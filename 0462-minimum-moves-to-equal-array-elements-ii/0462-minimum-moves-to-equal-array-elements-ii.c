// Comparator function for sorting the array
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minMoves2(int* nums, int numsSize) {
    // Step 1: Sort the array to easily find the median
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Step 2: Find the median element
    int median = nums[numsSize / 2];
    
    // Step 3: Calculate the total absolute differences
    long long moves = 0;
    for (int i = 0; i < numsSize; i++) {
        long long diff = (long long)nums[i] - median;
        if (diff < 0) {
            moves -= diff;
        } else {
            moves += diff;
        }
    }
    
    return (int)moves;
}