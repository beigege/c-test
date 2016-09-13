#include <stdio.h>
/*
测试if两种判断写法结果是不是一样的
结果：一样的。满足一个条件就不去判断其他条件了
*/
void if1(int score){
	if(score>100){
		printf("输入成绩：%d,不应超过100！\n",score);
	}else if(score>=90){
		printf("输入成绩：%d,优秀！\n",score);
	}else if(score>=80){
		printf("输入成绩：%d,良好！\n",score);
	}else if(score>=70){
		printf("输入成绩：%d,好！\n",score);
	}else if(score>=60){
		printf("输入成绩：%d,一般！\n",score);
	}else{
		printf("输入成绩：%d,不及格！\n",score);
	}
}

void if2(int score){
	if(score>100){
		printf("输入成绩：%d,不应超过100！\n",score);
	}else if(score<=100 && score>=90){
		printf("输入成绩：%d,优秀！\n",score);
	}else if(score<90 && score>=80){
		printf("输入成绩：%d,良好！\n",score);
	}else if(score<80 && score>=70){
		printf("输入成绩：%d,好！\n",score);
	}else if(score<70 && score>=60){
		printf("输入成绩：%d,一般！\n",score);
	}else{
		printf("输入成绩：%d,不及格！\n",score);
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