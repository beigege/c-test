#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
Ŀ�ģ�
��һ�������ű��Ĵ�������У����ǵõ���һ�����µ��ַ���"GZPI655768"������"GZPI"�����˲�Ʒ����д���������ֵ�ǲ�Ʒ��š�������Ҫ�Խű������´��������Ҫ��: 
1�� ���дһ�����������ַ����л�ȡ�ò�Ʒ�ı�ţ��ַ����Ĺ����ǲ�Ʒ����д����ĸ��ɣ�λ����������Ʒ�����������ɣ�λ��������

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