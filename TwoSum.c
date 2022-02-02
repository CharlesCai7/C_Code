/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;
    int* ret = (int*)malloc((*returnSize) * (sizeof(int)));       //(int*)为强制类型转换
    for (int i = 0; i < numsSize-1;i++)
    {
        for (int j = i + 1; j < numsSize;j++)
        {
            if((nums[i]+nums[j])==target)
                {
                    ret[0] = i;
                    ret[1] = j;
                    break;
                }
        }
    }
   
    return ret;   
}
