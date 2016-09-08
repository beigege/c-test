#include <stdio.h>
#include <malloc.h>

struct Student{
	char name[10];
	int age;
	int score;
};

int main(void){
	int i;
	int len;

	printf("请输入生成struct Student数组的个数：\n");
	scanf("%d",&len);
	//动态生成数组
	struct Student * sp = (struct Student *)malloc(len * sizeof(struct Student));
	
	for(i=0;i<len;i++){
		printf("请输入name:\n");
		scanf("%s",sp[i].name);//name是数组，所以数组名就是地址。不用加取地址符&
		printf("请输入age:\n");
		scanf("%d",&sp[i].age);//要加取地址符&
		printf("请输入score:\n");
		scanf("%d",&sp[i].score);
	}
	printf("输出结构体数组里的内容:\n");
	for(i=0;i<len;i++){
		printf("name:  %s\n",sp[i].name);
		printf("age:   %d\n",sp[i].age);
		printf("score: %d\n",sp[i].score);
	}

	return 0;
}