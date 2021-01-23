//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int my_strcmp(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if (*str1 == '\0')
//			return 0;
//	}
//
//	if (*str1 - *str2) //不等的情况
//		return 1;
//	else
//		return -1;
//
//}
//
//
//int main()
//{
//
//	char str3[10] = "Hello";
//	char str4[10] = "Hello";
//	printf("%d\n", my_strcmp(str3, str4));
//	return 0;
//}