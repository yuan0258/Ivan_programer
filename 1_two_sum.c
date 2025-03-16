#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(sizeof(int) * 2);
    int i,j;
    for( i=0; i < numsSize; i++){
        for(j=i+1; j < numsSize; j++) {
            printf("i=%d,j=%d,twosum=%d\n",i,j,nums[i] + nums[j]);
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    result[0] = i;
    result[1] = j;
    *returnSize = 2;
    return result;
}

int main(){
	int nums[4] = {2,7,11,15};
	int size = 0;
	int *result = twoSum(nums, 4, 9, &size);
	printf("Input:[%d,%d,%d,%d]", nums[0],nums[1],nums[2],nums[3]);
	printf("Output:[%d, %d]",result[0],result[1]);
	free(result);

}
