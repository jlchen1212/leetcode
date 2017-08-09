int partition(int* nums, int startIndex, int endIndex) {
    int pivot = nums[endIndex];
    int i, j, temp;
    i = startIndex - 1;
    for (j = startIndex; j < endIndex; j++) {
        if (nums[j] <= pivot) {
            i++;
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    i++;
    temp = nums[i];
    nums[i] = nums[endIndex];
    nums[endIndex] = temp;
    return i;
}

void quickSort(int* nums, int first, int last) {
    if (first < last) {
        int partIndex = 0;
        partIndex = partition(nums, first, last);
        quickSort(nums, first, partIndex - 1);
        quickSort(nums, partIndex + 1, last);
    }
}

int arrayPairSum(int* nums, int numsSize) {
    int i;
    int sum = 0;
    quickSort(nums, 0, numsSize - 1);
    
    for (i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }
    return sum;
}
