#include <stdio.h>
#include <string.h>
/*
1��strlen()��������ָ�����ַ���s �ĳ��ȣ������������ַ�"\0"��
2������ַ��ĸ��������ַ�����Ĵ�С����ôstrlen()�ķ���ֵ���޷�ȷ���ˣ�����
    char str[6] = "abcxyz";
strlen(str)�ķ���ֵ���ǲ�ȷ���ġ���Ϊstr�Ľ�β����0��strlen()�������������ֱ������'\0'������Щ����������ǲ�ȷ���ġ�

3��strlen() ������������ַ�����ʵ�ʳ��ȣ�������һ��'\0'�����������ֻ����û�и�������ֵ���������ǲ����ģ�������׵�ַһֱ����ȥ��ֱ������'\0'ֹͣ����sizeof���ص��Ǳ�����������ռ���ڴ���������ʵ�ʳ��ȣ�����sizeof���Ǻ�����������һ����������strlen()�Ǻ�����
*/

int main(void){
	char chars[4] = {'a','b','c','d'};
	char chars2[5] = {'a','b','c','d'};
	char strings[] = "efgh";
	char chars3[] = {'a','b','c','d','\0'};
	int i;
	int count1=0;
	int count2=0;
	int count3=0;
	printf("�ַ����鳤�Ȳ�ȷ����%d \n",strlen(chars));
	printf("�ַ����鳤�ȣ�%d \n",strlen(chars2));
	printf("�ַ����鳤�ȣ�%d \n",strlen(strings));
	printf("�ַ����鳤�ȣ�%d \n",strlen(chars3));
	for(i=0;chars[i]!='\0';i++){
		count1++;
	}
	printf("i=%d,count=%d.\n",i,count1);
	for(i=0;chars2[i]!='\0';i++){
		count2++;
	}
	printf("i=%d,count=%d.\n",i,count2);
	for(i=0;strings[i]!='\0';i++){
		count3++;
	}
	printf("i=%d,count=%d.\n",i,count3);

	for(i=0;;i++){
		if(chars[i]=='\0'){
			printf("%d\n",i+1);
			break;
		}
	}
	for(i=0;;i++){
		if(chars2[i]=='\0'){
			printf("%d\n",i+1);
			break;
		}
	}
		for(i=0;;i++){
		if(strings[i]=='\0'){
			printf("%d\n",i+1);
			break;
		}
	}
		for(i=0;;i++){
		if(chars3[i]=='\0'){
			printf("%d\n",i+1);
			break;
		}
	}
}