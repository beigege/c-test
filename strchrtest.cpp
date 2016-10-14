#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>//大小写字母转换

/*
目的：
1.	重写srtrchr函数，实现查找字符串中指定字符最后一次出现时，所有的字符输出，将其中指定字符串的大写字母变成对应的小写字母并输出。如字符串"HAYYP",指定字符串为'y'，则输出"yP";
*/

/*
利用方法：
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
	*result = tolower(*result);//大小写字母转换
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