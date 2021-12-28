#include <stdio.h>
#include <math.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int maxsize = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i]==1)
        {
            count++;
        }else{
            maxsize =fmax(maxsize, count); //更新最大值
            count = 0;
        }
        
    }
    maxsize = fmax(maxsize, count); //末尾再更新一次最大值
    return maxsize;
}
