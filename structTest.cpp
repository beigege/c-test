#include <stdio.h>
#include <string.h>
	//定义结构体
	struct Student{
		char name;
		int age;
		int score;

	};
	struct Student2{
		char name[20];
		int age;
		int score;

	};

	void fuzhi(struct Student2 * );//函数声明

int main(void){

	//初始化结构体，方式1
	struct Student s1={'1',20,80};
	//初始化结构体，方式2
	struct Student s2;
	s2.name='2';
	s2.age=30;
	s2.score=90;

	printf("name=%c,age=%d,score=%d \n",s1.name,s1.age,s1.score);
	printf("name=%c,age=%d,score=%d \n",s2.name,s2.age,s2.score);
	//使用结构体指针。sp是struct Student *类型的指针。
	struct Student * sp;
	sp=&s1;
	sp->age=22;//用结构体指针访问结构体内容
	(*sp).score=88;
	printf("name=%c,age=%d,score=%d \n",s1.name,s1.age,s1.score);
	printf("name=%c,age=%d,score=%d \n",sp->name,sp->age,sp->score);

	struct Student2 s3={"学生2",20,80};//字符串赋给 char [10]。不能单独写s3.name="学生2"，会报错。要用strcpy(s3.name,"学生2")。这个之后研究下字符串
	printf("name=%s,age=%d,score=%d \n",s3.name,s3.age,s3.score);
	
	//调用函数进行结构体内容修改
	fuzhi(&s3);
	printf("调用函数进行赋值后：name=%s,age=%d,score=%d \n",s3.name,s3.age,s3.score);

	return 0;
}

void fuzhi(struct Student2 * sp2){
	sp2->age=10;
	strcpy(sp2->name,"指针给结构体赋值");
	sp2->score=60;
}