#define _CRT_SECURE_NO_WARNINGS 1
//��һ����¼ϵͳ����½����ʧ�ܺ���ʾ�ر�ϵͳ
#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	char password [20] = {0};
	
	printf("����������\n");
	
	for(i=0;i<3;i++)
	{
		scanf("%s",password);
	if(strcmp (password ,"123456") ==0)
		{
			
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
		if(i==3)
			printf("�������붼�����˳�����\n");
	return 0 ;
}