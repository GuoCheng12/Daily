//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int missingNumber(int* nums, int numsSize)
{
	int left = 0;
	int right = numsSize - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (nums[mid] != mid)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return left;
}

int main(void)
{
	int arr[] = {0,1,2,3,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = missingNumber(arr, sz);
	printf("%d", ret);
	return 0;
}

