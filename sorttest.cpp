#include<stdio.h>
#include<string.h>

/*
Ŀ�ģ�
2.	����һ�����������ַ���"zheshigekendiedetimu"����С�����˳�����У�����ȡ��6λ��
*/
char * sorttest(char * str){
	int i;
	int j;
	int len = strlen(str);
	char t;
	if(len<6){
		return "this str is to short!";
	}
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(str[j]!='\0' && (str[i]>str[j])){//ע��ȥ��\0
				t=str[i];
				str[i]=str[j];
				str[j]=t;
			}
		}
		//printf(str);
		//printf("\n");
	}
	//printf(str);
	//printf("\n");
	return (str+(len-5));//�������6���ַ���Ҫȥ�����һ��\0

}

int main(void){
	char str[] = "zheshigekendiedetimu";
	printf(sorttest(str));
	printf("\n");
	return 0;
}