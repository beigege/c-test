#include<stdio.h>
#include<string.h>

/*
Ŀ�ģ�
������ͨ����������õ����µ��ַ���"tid=231&fid=322"������tid��ֵ�п�������λ����Ҳ�п�����2λ��������ȷ�������дһ����������ȡ��"fid��322"��ֵ������ע��������ID��ֵλ�����ǲ���Ԥ֪�ģ�
*/
/*
���ú�����
strstr()�������������Ӵ����ַ������״γ��ֵ�λ�ã���ԭ��Ϊ��
    char *strstr( char *str, char * substr );

������˵����strΪҪ�������ַ�����substrΪҪ�������Ӵ���

������ֵ�������ַ���str�е�һ�γ����Ӵ�substr�ĵ�ַ�����û�м������Ӵ����򷵻�NULL��
*/
char * test(char * str){
	char flag[] = "fid";
	int len = strlen(str);
	if(len==0){
		return "the str len is 0!";
	}
	if(strstr(str,flag)){
		return strstr(str,flag);
	}else{
		return "no fid!";
	}
}

int main(void){
	char str1[] = "tid=231&fid=322";
	printf(test(str1));
	printf("\n");
	char str2[] = "tid=21&fid=32";
	printf(test(str2));
	printf("\n");
	char str3[] = "tid=21&fi=32";
	printf(test(str3));
	printf("\n");
	return 0;
}