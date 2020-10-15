#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <Windows.h>

//实现三个转换
//1.大小写互转
//2.数字移位
//3.ASCII码转换

void character()
{
	char ch;
	printf("请再一次输入您的字符密码\n");
	getchar ();
	scanf("%c",&ch);
	printf("%d\n",ch);
	Sleep (1000);
	system("cls");
}

void cap_and_sm_le()
{
	printf("请再一次输入您的字母密码\n");
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
	printf("请再一次输入您的数字密码\n");
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
	printf("请输入任意一个字符，程序将为您判断其类型\n");
	c = getchar ();
	if(isdigit(c) != 0)
	{
       printf("是数字,进入密码数字转换程序\n") ;
	   code_transfer ();
	   getchar();
	}

   
	else if(isalpha(c) != 0)
      { 
		printf("是字母,进入密码字母转换程序\n");
		cap_and_sm_le();
	 }
	else
	{
		printf("是其他字符，进入其他字符转换程序\n");
		character();		
	}
}
	return 0;
}
