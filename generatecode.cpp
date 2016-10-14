#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
目的：
在一个订单脚本的处理过程中，我们得到了一串如下的字符串"GZPI655768"，其中"GZPI"代表了产品的缩写，后面的数值是产品编号。现在需要对脚本做如下处理，请完成要求: 
2. 后续的脚本需要提交一个订单验证号，以防重复提交订单，此验证号的规则是：
产品编号+当前日期（请利用lr_save_datetime()函数获取时间，使用方法请在F1中查看使用方法）证号的生成。（不一定需要自定义函数，能拼接出来即可）
注：日期的格式如下：20151105070656（年月日时分秒）

*/
char * test(char * str){
	int i =0;
	char * result;
	if(strlen(str)==0){
		return "str len is 0!";
	}
	while(isalpha(*(str+i))){
		i++;
	}
	result = str+i;

	return strcat(result,"20151105070656");
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