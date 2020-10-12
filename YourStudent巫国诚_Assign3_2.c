#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求e的近似值

int main()
{
	int i = 1;
	double ret = 1.0;
	int n = 1;
	double sum = 1.0;
	double ret0 =0.0;
	//scanf("%d",&n);
	while(1)
		{
			ret = ret * i;
			ret0 = 1/ret;
			sum = sum + ret0;
			i++;
	if(ret0<1e-5)
	{
		
		printf("sum = %lf\n",sum);
		printf("i = %d\n",i);
		break;
	}
		}
	return 0;
}