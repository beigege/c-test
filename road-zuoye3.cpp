#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <malloc.h>
/*
自定义一个函数，实现求字符串的长度（重写strlen函数）（分别用指针及数组实现）
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
自定义一个函数，实现用指定的字符替换字符串中指定的字符（分别用指针及数组实现）
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
自定义一个函数，实现从字符串的第M置截取N个长度的字符（分别用指针及数组实现）
*/
char * SubStringBYArray(char str[],int begin,int len){
	int i;
	int j = 0;
	char *result = (char *)malloc((len+1) * sizeof(char));//字符数组的长度要比实际字符串的长度len大1，最后一位放‘\0’
	
	if(strlen(str)<len || begin>=strlen(str) || (begin+len)>=strlen(str)){
		printf("输入的起始位置或长度不合法！");
		return NULL;
	}
	for(i=0;i<len && j<len;i++){
		*(result+i)=str[begin+j];
		j++;
	}
	*(result+i)='\0';//最后一位放‘\0’
	printf("字符串长度strlen=%d\n",strlen(result));
	return result;
}

char * SubStringBYzhizhen(char *p,int begin,int len){
	int i;
	int j = 0;
	char *result = (char *)malloc((len+1) * sizeof(char));//字符数组的长度要比实际字符串的长度len大1，最后一位放‘\0’
	if(strlen(p)<len || begin>=strlen(p) || (begin+len)>=strlen(p)){
		printf("输入的起始位置或长度不合法！");
		return NULL;
	}
	for(i=0;i<len && j<len;i++){
		*(result+i)=*(p+begin+j);
		j++;
	}
	*(result+i)='\0';//最后一位放‘\0’
	return result;
}

int main(void){
	char  str[] = "abcdea2";
	char  * p;
	p=str;
	printf("字符串长度strlen=%d\n",strlen(str));
	printf("字符串长度byArray=%d\n",StringLenBYArray(str));
	printf("字符串长度byzhizhen=%d\n",StringLenBYzhizhen(p));
	printf("****************************************************\n");
	printf("字符替换byArray=%s\n",ReplaceBYArray(str,'a','f'));
	printf("字符替换byzhizhen=%s\n",ReplaceBYzhizhen(p,'a','f'));
	printf("****************************************************\n");
	printf("字符串截取byArray=%s\n",SubStringBYArray(str,1,3));
	printf("字符串截取byzhizhen=%s\n",SubStringBYzhizhen(p,1,3));
	printf("****************************************************\n");

	return 0;
}