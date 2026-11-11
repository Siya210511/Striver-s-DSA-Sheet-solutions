int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;

    int *result=(int*)malloc(2*sizeof(int));
    
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
            {
                if (j==i)
                    continue;
                
                else  
                    if (nums[i]+nums[j]==target)
                        {
                            result[0]=i;
                            result[1]=j;
                            *returnSize=2;
                            return result;
                        }
            }
    }
    *returnSize=0;
    return NULL;
}

/*
Complexity Analysis of this solution:
# Time Complexity: O(N²)
->Nested Loops: The outer loop runs N times (where N = numsSize), and for each outer loop iteration, the inner loop also runs N times.
->Total Comparisons: In the worst-case scenario (e.g., target element pair is at the end or does not exist), the code performs N times N (N * N)= N² checks.
# Space Complexity: O(1) - Auxiliary
->Memory Allocation: The dynamic allocation malloc(2 * sizeof(int)) allocates space for a fixed 2-integer array.
  Because this memory size remains constant regardless of how large numsSize gets, the extra space complexity is O(1).
*/