#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <malloc.h>
/*
�Զ���һ��������ʵ�����ַ����ĳ��ȣ���дstrlen���������ֱ���ָ�뼰����ʵ�֣�
*/
int StringLenBYArray(char str[]){
	int i;
	int len = 0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	return len;
}

int StringLenBYzhizhen(char * p){
	int i;
	int len = 0;
	for(i=0;*(p+i)!='\0';i++){
		len++;
	}
	return len;
}
/*
�Զ���һ��������ʵ����ָ�����ַ��滻�ַ�����ָ�����ַ����ֱ���ָ�뼰����ʵ�֣�
*/
char * ReplaceBYArray(char str[],char org,char des){
	int i;
	int len = 0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==org){
			str[i]=des;
		}
	}
	return str;
}
char * ReplaceBYzhizhen(char * p,char org,char des){
	int i;
	int len = 0;
	for(i=0;*(p+i)!='\0';i++){
		if(*(p+i)==org){
			*(p+i)=des;
		}
	}
	return p;
}
/*
�Զ���һ��������ʵ�ִ��ַ����ĵ�M�ý�ȡN�����ȵ��ַ����ֱ���ָ�뼰����ʵ�֣�
*/
char * SubStringBYArray(char str[],int begin,int len){
	int i;
	int j = 0;
	char *result = (char *)malloc((len+1) * sizeof(char));//�ַ�����ĳ���Ҫ��ʵ���ַ����ĳ���len��1�����һλ�š�\0��
	
	if(strlen(str)<len || begin>=strlen(str) || (begin+len)>=strlen(str)){
		printf("�������ʼλ�û򳤶Ȳ��Ϸ���");
		return NULL;
	}
	for(i=0;i<len && j<len;i++){
		*(result+i)=str[begin+j];
		j++;
	}
	*(result+i)='\0';//���һλ�š�\0��
	printf("�ַ�������strlen=%d\n",strlen(result));
	return result;
}

char * SubStringBYzhizhen(char *p,int begin,int len){
	int i;
	int j = 0;
	char *result = (char *)malloc((len+1) * sizeof(char));//�ַ�����ĳ���Ҫ��ʵ���ַ����ĳ���len��1�����һλ�š�\0��
	if(strlen(p)<len || begin>=strlen(p) || (begin+len)>=strlen(p)){
		printf("�������ʼλ�û򳤶Ȳ��Ϸ���");
		return NULL;
	}
	for(i=0;i<len && j<len;i++){
		*(result+i)=*(p+begin+j);
		j++;
	}
	*(result+i)='\0';//���һλ�š�\0��
	return result;
}

int main(void){
	char  str[] = "abcdea2";
	char  * p;
	p=str;
	printf("�ַ�������strlen=%d\n",strlen(str));
	printf("�ַ�������byArray=%d\n",StringLenBYArray(str));
	printf("�ַ�������byzhizhen=%d\n",StringLenBYzhizhen(p));
	printf("****************************************************\n");
	printf("�ַ��滻byArray=%s\n",ReplaceBYArray(str,'a','f'));
	printf("�ַ��滻byzhizhen=%s\n",ReplaceBYzhizhen(p,'a','f'));
	printf("****************************************************\n");
	printf("�ַ�����ȡbyArray=%s\n",SubStringBYArray(str,1,3));
	printf("�ַ�����ȡbyzhizhen=%s\n",SubStringBYzhizhen(p,1,3));
	printf("****************************************************\n");

	return 0;
}