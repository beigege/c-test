#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*Ŀ�ģ�
����һ��������ʵ�ֶ��ַ��������²��������ַ�Ϊ��ĸʱ����Ӧ��ASCIIֵ��5�����ַ�Ϊ����ʱ��ԭ����������������ַ�����ʱ�����������������Ѵ�����ַ�����
*/
/*ʹ�õĺ�����
ͷ�ļ���#include <ctype.h>

isalnum() �����ж�һ���ַ��Ƿ�ΪӢ����ĸ�����֣��൱�� isalpha(c) || isdigit(c)����ԭ��Ϊ��
    int isalnum(int c);

��������c Ϊ��Ҫ�����ַ���

������ֵ��������c Ϊ��ĸ�����֣��� c Ϊ 0 ~ 9  a ~ z  A ~ Z �򷵻ط� 0�����򷵻� 0��
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