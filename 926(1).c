#define _CRT_SECURE_NO_WARNINGS 1
//做一个登录系统，登陆三次失败后提示关闭系统
#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	char password [20] = {0};
	
	printf("请输入密码\n");
	
	for(i=0;i<3;i++)
	{
		scanf("%s",password);
	if(strcmp (password ,"123456") ==0)
		{
			
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
		if(i==3)
			printf("三次密码都错误，退出程序\n");
	return 0 ;
}