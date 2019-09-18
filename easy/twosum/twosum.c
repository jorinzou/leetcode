/*************************************************************************
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *p = malloc(sizeof(int)*2);
	if (NULL == p)
		return NULL;

	int i = 0, j = 0, flag = 0;
	for(i = 0; i < numsSize; i++)
	{
		for(j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target) {
				p[0] = i;
				p[1] = j;
				flag = 1;
				*returnSize = target;
				goto END;
			}

			if (flag == 1) {
				break;
			}
	  }
	}

END:
	if (flag == 1) {
		return p;
	}
	else {
		free(p);
		return NULL;
	}
}

int main(void)
{
	int arr[4] = {2,7,11,9};
	int a = 0;
	int *p = twoSum(arr,4,11,&a);
	if (p == NULL)
	return -1;

	printf("%d,%d,%d\n",p[0],p[1],a);
	return 0;
}
