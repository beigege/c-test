#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
Ŀ�ģ�
��һ�������ű��Ĵ�������У����ǵõ���һ�����µ��ַ���"GZPI655768"������"GZPI"�����˲�Ʒ����д���������ֵ�ǲ�Ʒ��š�������Ҫ�Խű������´��������Ҫ��: 
2. �����Ľű���Ҫ�ύһ��������֤�ţ��Է��ظ��ύ����������֤�ŵĹ����ǣ�
��Ʒ���+��ǰ���ڣ�������lr_save_datetime()������ȡʱ�䣬ʹ�÷�������F1�в鿴ʹ�÷�����֤�ŵ����ɡ�����һ����Ҫ�Զ��庯������ƴ�ӳ������ɣ�
ע�����ڵĸ�ʽ���£�20151105070656��������ʱ���룩

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