#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>//��Сд��ĸת��

/*
Ŀ�ģ�
1.	��дsrtrchr������ʵ�ֲ����ַ�����ָ���ַ����һ�γ���ʱ�����е��ַ������������ָ���ַ����Ĵ�д��ĸ��ɶ�Ӧ��Сд��ĸ����������ַ���"HAYYP",ָ���ַ���Ϊ'y'�������"yP";
*/

/*
���÷�����
tolower()
*/
char * strchartest(char * str,char c){
	int i=strlen(str);
	int lastindex;
	
	if(i<=0){
		return "input str too short!";
	}
	while(i>0){
		if(*(str+i-1)==c){
			lastindex=i-1;
			break;
		}
		i--;
	}
	
	if(i==0){
		return "str don't has this char!";
	}
	char * result= (char *)malloc(sizeof(char *)*(strlen(str)-lastindex));
	result=(str+lastindex);
	*result = tolower(*result);//��Сд��ĸת��
	//return "str has this char!";
	return result;
}

int main(void){
	char  str[] ="HA1YP";
	char c = '1';
	printf(strchartest(str,c));
	printf("\n");
	return 0;
}