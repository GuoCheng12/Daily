#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <Windows.h>

//ʵ������ת��
//1.��Сд��ת
//2.������λ
//3.ASCII��ת��

void character()
{
	char ch;
	printf("����һ�����������ַ�����\n");
	getchar ();
	scanf("%c",&ch);
	printf("%d\n",ch);
	Sleep (1000);
	system("cls");
}

void cap_and_sm_le()
{
	printf("����һ������������ĸ����\n");
    while (1)              
    {
        char a;
        scanf("%c", &a);
        if (a >= 'A' && a <= 'Z')
        {
            a = a + 32;     
            printf("%c", a);
			Sleep (1000);
			system("cls");
			break;
        }
        else if (a >= 'a' && a <= 'z')
        {
            a = a - 32;      
            printf("%c", a);
			Sleep (1000);
			system("cls");
			break;
		}
	}
}
void code_transfer ()
{
	int code;
	int i=0;
	printf("����һ������������������\n");
	getchar ();
	scanf("%d",&code);
			code++ ;
		printf("%d\n",code);
		Sleep (1000);
		system("cls");
	}

int main()
{	
	char c ;
	while (1)
{
	printf("����������һ���ַ�������Ϊ���ж�������\n");
	c = getchar ();
	if(isdigit(c) != 0)
	{
       printf("������,������������ת������\n") ;
	   code_transfer ();
	   getchar();
	}

   
	else if(isalpha(c) != 0)
      { 
		printf("����ĸ,����������ĸת������\n");
		cap_and_sm_le();
	 }
	else
	{
		printf("�������ַ������������ַ�ת������\n");
		character();		
	}
}
	return 0;
}
