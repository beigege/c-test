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
				printf("breaktest����forѭ�����棡breakǰ��\n");
			break;
				printf("breaktest����forѭ�����棡break����\n");
		}
	}
	printf("breaktest����forѭ�����棡\n");
}
void returntest(void){
	int i;
	for(i=0;i<3;i++){
		if(i%2==0){
				printf("returntest����forѭ�����棡returnǰ��\n");
			return;
				printf("returntest����forѭ�����棡return����\n");
		}
	}
	printf("returntest����forѭ�����棡\n");
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
	printf("��Ҫ��main����ǰ�����������Ŷ��\n");
}