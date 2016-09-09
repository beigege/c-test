#include <stdio.h>

void shengming(void);

int f1(){
	float f= 11.22f;
	return f;
}

void breaktest(void){
	int i;
	for(i=1;i<3;i++){
		if(i%2==0){
				printf("breaktest我在for循环里面！break前面\n");
			break;
				printf("breaktest我在for循环里面！break后面\n");
		}
	}
	printf("breaktest我在for循环外面！\n");
}
void returntest(void){
	int i;
	for(i=0;i<3;i++){
		if(i%2==0){
				printf("returntest我在for循环里面！return前面\n");
			return;
				printf("returntest我在for循环里面！return后面\n");
		}
	}
	printf("returntest我在for循环外面！\n");
}

int main(void){
	int i=10;
	printf("%d \n",f1());
	shengming();
	breaktest();
	returntest();
	return 0;
}
void shengming(void){
	printf("我要在main函数前面进行声明的哦！\n");
}