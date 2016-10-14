#include<stdio.h>

/*
目的：
3.	有一分数序列：－1， 2，－4， 8，－16， 32...求出这个数列的前20项之和
*/
int sumtest(int count){
	int total = 0;
	int i ;
	int data =1;
	int flag = -1;
	for(i=1;i<count;i++){
		if(i%2==0){
			flag = 1;
		}
		printf("数列%d:%d\n",i,data);
		total = total + data  * flag;
		data = data *2;
	}
	return total;
}

int main(void){
	printf("数列前20个和是：%d\n",sumtest(20));
}