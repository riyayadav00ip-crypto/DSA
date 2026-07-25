int removeDuplicates(int* nums, int numsSize) {
    int k = numsSize;
    for(int i = 0; i< k - 1; i++) {
        if(nums[i] == nums[i+1]) {
            
        for(int j = i; j < k - 1; j++) {
            nums[j] = nums[j+1];
        }
        k--;
        i--;

        
        }
    }
    return k;   
}