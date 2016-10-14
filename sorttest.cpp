#include<stdio.h>
#include<string.h>

/*
目的：
2.	定义一个函数，对字符串"zheshigekendiedetimu"按从小到大的顺序排列，并截取后6位数
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
			if(str[j]!='\0' && (str[i]>str[j])){//注意去掉\0
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
	return (str+(len-5));//返回最后6个字符，要去掉最后一个\0

}

int main(void){
	char str[] = "zheshigekendiedetimu";
	printf(sorttest(str));
	printf("\n");
	return 0;
}