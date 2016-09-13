#include <stdio.h>
#include <string.h>
/*
1、strlen()用来计算指定的字符串s 的长度，不包括结束字符"\0"。
2、如果字符的个数等于字符数组的大小，那么strlen()的返回值就无法确定了，例如
    char str[6] = "abcxyz";
strlen(str)的返回值将是不确定的。因为str的结尾不是0，strlen()会继续向后检索，直到遇到'\0'，而这些区域的内容是不确定的。

3、strlen() 函数计算的是字符串的实际长度，遇到第一个'\0'结束。如果你只定义没有给它赋初值，这个结果是不定的，它会从首地址一直找下去，直到遇到'\0'停止。而sizeof返回的是变量声明后所占的内存数，不是实际长度，此外sizeof不是函数，仅仅是一个操作符，strlen()是函数。
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
	printf("字符数组长度不确定：%d \n",strlen(chars));
	printf("字符数组长度：%d \n",strlen(chars2));
	printf("字符数组长度：%d \n",strlen(strings));
	printf("字符数组长度：%d \n",strlen(chars3));
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