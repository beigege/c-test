#include <stdio.h>
/*
2016-09-06
目的：测试C语言的float相关：除法和取余结果什么时候返回整形什么时候返回float
除法运算符“/”和求余运算符“%”
除法运算符“/”。二元运算符，具有左结合性。参与运算的量均为整型时，结果为整型，舍去小数。如果运算量中有一个为实型，结果为双精度实型。
例如：
5/2=2，1/2=0
5/2.0=2.5   
求余运算符“%”，二元运算符，具有左结合性。参与运算的量均为整型。求余运算的结果等于两个数相除后的余数。
例如：
5%2=1，1%2=1
5%2.0和5.0%2的结果是语法错误
*/
int main(void)
{
	int i = 1;
	int j = 4;
	int result_int = i/j;//i和j都是整形，结果也是整形
	float result_f = (float)i/j;//
	int result_mod_i = i%j;
	printf("余数是整形：%d \n",result_int);
	printf("余数是浮点数：%f \n",result_f);
	printf("模是：%d \n",result_mod_i);



}