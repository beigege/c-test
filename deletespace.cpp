#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char * delSpace(char * dest,char * str){
	int i=0;
	while(*str){
		if(*str!=' '){
			*(dest+i)=*str;
			i++;
		}
		str++;
	}
	*(dest+i)='\0';
	return dest;
}

int main(void)
{
	char str[] ="abc def g";
	int len =strlen(str)*sizeof(char);
	
	printf("%s\n",str);
	char * p=(char *)malloc(len);
	printf("%s",delSpace(p,str));
	return 0;
}

