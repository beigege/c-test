#include<stdio.h>

/*
Ŀ�ģ�
3.	��һ�������У���1�� 2����4�� 8����16�� 32...���������е�ǰ20��֮��
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
		printf("����%d:%d\n",i,data);
		total = total + data  * flag;
		data = data *2;
	}
	return total;
}

int main(void){
	printf("����ǰ20�����ǣ�%d\n",sumtest(20));
}