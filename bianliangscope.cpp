#include <stdio.h>

int quanju=10;
void f(){
	printf("全局变量,要在定义后面使用:%d\n",quanju);
	
	int jubu=20;
	printf("局部变量,要在定义后面使用:%d\n",jubu);
}
int main(void){
	f();
	return 0;
}