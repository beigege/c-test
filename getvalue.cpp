#include<stdio.h>
#include<string.h>

/*
目的：
当我们通过关联，会得到如下的字符串"tid=231&fid=322"，其中tid的值有可能是三位数，也有可能是2位数，不能确定，请编写一个函数，截取出"fid＝322"的值。（请注意这两个ID的值位数都是不可预知的）
*/
/*
利用函数：
strstr()函数用来检索子串在字符串中首次出现的位置，其原型为：
    char *strstr( char *str, char * substr );

【参数说明】str为要检索的字符串，substr为要检索的子串。

【返回值】返回字符串str中第一次出现子串substr的地址；如果没有检索到子串，则返回NULL。
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