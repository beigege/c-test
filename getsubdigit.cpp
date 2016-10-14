#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
目的：
在一个订单脚本的处理过程中，我们得到了一串如下的字符串"GZPI655768"，其中"GZPI"代表了产品的缩写，后面的数值是产品编号。现在需要对脚本做如下处理，请完成要求: 
1、 请编写一个函数，从字符串中获取该产品的编号（字符串的规则是产品的缩写由字母组成，位数不定，产品编号由数字组成，位数不定）

*/
char * test(char * str){
	int i =0;
	if(strlen(str)==0){
		return "str len is 0!";
	}
	while(isalpha(*(str+i))){
		i++;
	}
	return str+i;
}

int main(void){
	char str1[] = "GZPI655768";
	printf(test(str1));
	printf("\n");
	char str2[] = "GZPIW6557680";
	printf(test(str2));
	printf("\n");
	return 0;
}