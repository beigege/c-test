#include <stdio.h>
/*
����if�����ж�д������ǲ���һ����
�����һ���ġ�����һ�������Ͳ�ȥ�ж�����������
*/
void if1(int score){
	if(score>100){
		printf("����ɼ���%d,��Ӧ����100��\n",score);
	}else if(score>=90){
		printf("����ɼ���%d,���㣡\n",score);
	}else if(score>=80){
		printf("����ɼ���%d,���ã�\n",score);
	}else if(score>=70){
		printf("����ɼ���%d,�ã�\n",score);
	}else if(score>=60){
		printf("����ɼ���%d,һ�㣡\n",score);
	}else{
		printf("����ɼ���%d,������\n",score);
	}
}

void if2(int score){
	if(score>100){
		printf("����ɼ���%d,��Ӧ����100��\n",score);
	}else if(score<=100 && score>=90){
		printf("����ɼ���%d,���㣡\n",score);
	}else if(score<90 && score>=80){
		printf("����ɼ���%d,���ã�\n",score);
	}else if(score<80 && score>=70){
		printf("����ɼ���%d,�ã�\n",score);
	}else if(score<70 && score>=60){
		printf("����ɼ���%d,һ�㣡\n",score);
	}else{
		printf("����ɼ���%d,������\n",score);
	}
}

int main(void){
	int score[7] ={101,100,91,80,70,60,52};
	int i;
	for(i=0;i<7;i++){
		if1(score[i]);
		printf("+++++++\n");
		if2(score[i]);
		printf("++++++++++++++++++++++++++++++++++\n");
	}
}