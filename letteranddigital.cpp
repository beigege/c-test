#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*目的：
定义一个函数，实现对字符串做如下操作：当字符为字母时，对应的ASCII值加5，当字符为数字时，原样输出，当有其它字符出现时，结束操作，返回已处理的字符串。
*/
/*使用的函数：
头文件：#include <ctype.h>

isalnum() 用来判断一个字符是否为英文字母或数字，相当于 isalpha(c) || isdigit(c)，其原型为：
    int isalnum(int c);

【参数】c 为需要检测的字符。

【返回值】若参数c 为字母或数字，若 c 为 0 ~ 9  a ~ z  A ~ Z 则返回非 0，否则返回 0。
*/
char * test(char * str){
	int i = 0;
	while(isalnum(*(str+i))!=0){
		printf("is an alphanumeric character!\n");
		if( isalpha(*(str+i))!=0){
			*(str+i)=*(str+i)+5;
			printf("is an alpha!\n");
		}
		//else if(isdigit(*(str+i))!=0){}
		i++;
	}
	return str;
}

int main(void){
	char str[]="abAB12.a";
	printf(test(str));
	printf("\n");
	return 0;
}